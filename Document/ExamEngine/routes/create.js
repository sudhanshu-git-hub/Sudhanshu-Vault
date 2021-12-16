const express = require('express');
const router = express.Router();
const {ensureAuthenticated}= require('../config/auth');
//import model
const document = require('../models/document');
const paper = require('../models/paper');

router.get('/',ensureAuthenticated,(req,res)=>{
    res.render('./create/create',{
        auth:req.isAuthenticated()
       });
})
router.get('/new',ensureAuthenticated,(req,res)=>{
    res.render('./create/new',{
        auth:req.isAuthenticated()
       });
})
router.post('/new',ensureAuthenticated,(req,res)=>{
    let id = 0;
    const admin = req.user.email;
    const {title,type,nquestions} = req.body;
    const newDocument = new document({title,admin,type,nquestions,
                                            enrolments:[]});

    newDocument.save((err,doc)=>{
        res.redirect(`/create/edit/${doc.nquestions}/${doc.id}`)
    });
    
})

router.get('/edit',ensureAuthenticated,(req,res)=>{
    document.find({admin:req.user.email},(err,doc)=>{
        res.render('./create/edit',{
            auth:req.isAuthenticated(),
            document:doc
        })
    })
    


     // if(doc.paperid=='false'){
        //     res.redirect(`/edit/${doc.nquestions}/${doc.id}`);
        // }
        // else{
        //     res.send(comming)
        // }

})

router.get('/edit/:nquestons/:id',ensureAuthenticated,(req,res)=>{
        const doc= document.findOne({_id:req.params.id})
        .then(doc=>{
            res.render('./create/editdocument',{
                auth:req.isAuthenticated(),
                title:doc.title,
                type:doc.type,
                nquestions:doc.nquestions,
                id:doc.id
               });
        })
        
})

router.post('/edit/:nquestions/:id',ensureAuthenticated,(req,res)=>{
    var oldOptions = req.body.options;
    var newOptions = [];

    while(oldOptions.length) {
        newOptions.push(oldOptions.splice(0,4));
    }

    var oldAnswers=req.body.answers;
    var newAnswer = []
    newAnswer.push(req.params.id);

    for (let i = 0; i < oldAnswers.length; i++) {
       newAnswer.push(oldAnswers[i]);
    }
    let questions=[];
    if(req.params.nquestions==1){
        questions.push(req.body.questions);
    }
    else{
        questions = req.body.questions;
    }

    const newPaper = new paper({
        documentid:req.params.id,
        questions:questions,
        options:newOptions,
        answers:newAnswer
    })
    newPaper.save(async (err,doc)=>{
        const updateDocument= await document.findOneAndUpdate(
            {_id:req.params.id},
            {paperid:doc.id}
            )
            res.redirect(`/create/confirm/${req.params.id}/${doc.id}`);
    });
    
})

router.get('/confirm/:documentid/:paperid',ensureAuthenticated,(req,res)=>{
    res.render('confirmation',{
        auth:req.isAuthenticated(),
        documentid:req.params.documentid,
        paperid:req.params.paperid,
        message:"Your request is successfully completed"
       });
})
module.exports = router;
