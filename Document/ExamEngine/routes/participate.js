const express = require('express');
const router = express.Router();
const bcrypt = require("bcrypt");
const {ensureAuthenticated}= require('../config/auth');

//Import Models
const document = require('../models/document');
const paper = require('../models/paper');
const usersData = require('../models/usersData');

const { request } = require('express');

router.get('/',ensureAuthenticated,(req,res)=>{
     document.find({},(err,doc)=>{   
     res.render('./participate/list',
    {auth:req.isAuthenticated(),
    document:doc
    });
    })  
})

router.get('/:documentid',ensureAuthenticated,(req,res)=>{
    const email = req.user.email;
    document.findOne({_id:req.params.documentid},(err,doc)=>{
        let participated = false;
        for (let i = 0; i < doc.enrolments.length; i++) {
           if(doc.enrolments[i][1]==email){
                participated = true;
           }
        }
            res.render('./participate/envelope',{
                auth:req.isAuthenticated(),
                documentid:doc.id,
                paperid:doc.paperid,
                title:doc.title,
                admin:doc.admin,
                nquestions:doc.nquestions,
                participated:participated
            });
    })
})

router.get('/:documentid/:paperid',ensureAuthenticated,(req,res)=>{
    
        document.findOne({_id:req.params.documentid},(err,selectedDocument)=>{
        paper.findOne({_id:req.params.paperid},(err,userPaper)=>{
            res.render('./participate/paper',{
            auth:req.isAuthenticated(),
            documentid:selectedDocument.id,
            paperid:userPaper.id,
            title:selectedDocument.title,
            nquestions:selectedDocument.nquestions,
            type:selectedDocument.type,
            questions:userPaper.questions,
            options:userPaper.options
            });
        });  
        });
    
})

router.post('/:documentid/:paperid',ensureAuthenticated,async (req,res)=>{
    
    let userAnswer=[];
    await document.findOne({_id:req.params.documentid},(err,doc)=>{
            userAnswer.push(doc.id);
            userAnswer.push(doc.title);
            userAnswer.push(doc.admin);
    });

    let userInput = req.body;
    for(let key in userInput){
        userAnswer.push(userInput[key]);
    } 
        await usersData.findOneAndUpdate(
            {email:req.user.email},
            {$push:{
                submissions:userAnswer}
            });

        await document.findOneAndUpdate(
                {_id:req.params.documentid},
                {$push:{
                    enrolments:[req.user.name,req.user.email]}
            });

        res.render('confirmation',{
        auth:req.isAuthenticated(),
        documentid:req.params.documentid,
        paperid:req.params.paperid,
        message:"Participation Done"
    })

})

function generateHash(text) {
    bcrypt.genSalt(10,(err,salt)=>{
        bcrypt.hash(text,salt,(err,hash)=>{
            if(err) throw err;
            text = hash;
        })
    })
    return text;
}

module.exports = router;