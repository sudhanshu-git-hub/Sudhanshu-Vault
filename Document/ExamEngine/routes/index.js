const express = require('express');
const router = express.Router();
const ejs = require('ejs');
const jwt = require('jsonwebtoken');
const {ensureAuthenticated}= require('../config/auth');
const sendGrid= require('@sendgrid/mail');
const SECRET_KEY = require('../config/key').jwtKey;

//Cryptr
const Cryptr = require('cryptr');
const cryptr = new Cryptr(SECRET_KEY);


//Import Model(Database Api)
const userSessions = require('../models/userSessions');
const user = require('../models/Users');

router.get('/',(req,res)=>{
     if(req.isAuthenticated()){
       res.redirect('/dashboard');
    }
     else{
    res.render('welcome',{auth:req.isAuthenticated()});
   }
});

router.get('/afterlife',(req,res)=>{
    res.render('./afterlife/afterlife',{
        auth:req.isAuthenticated()
    });
});

router.get('/dashboard',ensureAuthenticated,(req,res)=>{
    const ip = req.ip;
    const userSession = new userSessions({email:req.user.email,ip});
    userSession.save();
    res.render('dashboard',{
        name:req.user.name,
        auth:req.isAuthenticated()
       });
})




router.get('/construction',ensureAuthenticated,(req,res)=>{
    res.render('construction',{
        auth:req.isAuthenticated()
       });
})
router.get('/error404',ensureAuthenticated,(req,res)=>{
    res.render('notfound',{
        auth:req.isAuthenticated()
       });
})
router.get('/contact',(req,res)=>{
    res.render('contact',{
        auth:req.isAuthenticated()
       });
})
router.post('/contact/send',(req,res)=>{
    let url =`https://api.whatsapp.com/send?phone=+918010396644&text=`+`${req.body.umessage}`+`--`+`${req.body.username}`;
    res.redirect(url);
})

//Import Create route
const createRoute = require('../routes/create')
//use route
router.use('/create',createRoute);


//Import Participate Route
const participateRoute = require('../routes/participate');
router.use('/participate',participateRoute);


//Import Status Routes
const statusRoute = require('../routes/status');
router.use('/status',statusRoute);

module.exports = router;