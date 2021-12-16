const express = require('express');
const router = express.Router();
const {ensureAuthenticated}= require('../config/auth');

const userData = require('../models/usersData');
const document = require('../models/document');
const paper = require('../models/paper');

router.get('/',ensureAuthenticated,(req,res)=>{
        res.render('./status/status',{
            auth:req.isAuthenticated()
        })
})
router.get('/myparticipation',ensureAuthenticated,(req,res)=>{
    
    userData.findOne({email:req.user.email},(err,doc)=>{
        res.render('./status/myparticipation',{
            auth:req.isAuthenticated(),
            document:doc.submissions
        })
    })    
})

router.get('/myparticipation/evaluate/:documentid',ensureAuthenticated,(req,res)=>{

    document.findOne({_id:req.params.documentid},(err,doc)=>{
            paper.findOne({_id:doc.paperid},(err,doc)=>{
               let correctAnswer = doc.answers;
               let paperid = doc.id;
               userData.findOne({email:req.user.email},(err,doc)=>{
                   
                   let userAnswer;
                   for (let i = 0; i < doc.submissions.length; i++) {
                        if(doc.submissions[i][0]==req.params.documentid){
                            userAnswer = doc.submissions[i];
                            break;
                        }   
                   }

                   //Evaluate App
                   res.render('./status/evaluation',{
                       auth:req.isAuthenticated(),
                       paperid,
                       email:req.user.email,
                       correctAnswer,
                       userAnswer,
                       score:0
                   });

               })
            })
    })
       
})
module.exports = router;
