const express = require('express');
const ejs = require('ejs');
const router = express.Router();
const Joi = require('@hapi/joi');
const bcrypt = require('bcrypt');
const passport = require('passport');
const randomString = require('randomstring');
const jwt = require('jsonwebtoken');
const sendGrid = require('@sendgrid/mail');
const SECRET_KEY = require('../config/key').jwtKey;

//Cryptr
const Cryptr = require('cryptr');
const cryptr = new Cryptr(SECRET_KEY);


//Import Model(Database Api)
const User = require('../models/Users');
const userData = require('../models/usersData');
const { send } = require('@sendgrid/mail');


//Registration Handle
router.get('/register',(req,res)=>{
    res.render('register',{auth:req.isAuthenticated()});
})


router.post('/register',(req,res)=>{
    const {name,email,password,password2}=req.body;
    //Error Handling
    let errors=[];
    //Check all fields
    if(!name || !email || !password || !password2){
        errors.push({message:'Please fill all the fields'})
    }
    //password matching
    if(password !== password2){
        errors.push({message:'Password mismatch'})
    }
    if(password.length<6){
        errors.push({message:'Password should be at least contain 6 characters'});
    }

    if(errors.length>0){
        res.render('register',{
            auth:req.isAuthenticated(),
            errors,
            name,
            email,
            password,
            password2
        })
    }

    //Registration Handle
    else{
        // Email Checking in database
        User.findOne({email:email})
        .then(user=>{
            if(user){
                errors.push({message:'Email already registered'});
                res.render('register',{
                    errors,
                    name,
                    password,
                    password2,
                    auth:req.isAuthenticated()
                })
            }

            //Writing to database
            else{
               const ip = req.ip;
                const newUser = new User({ name,email,password,ip,
                    verified:false
                });
                bcrypt.genSalt(10,(err,salt)=>{
                    bcrypt.hash(newUser.password,salt,(err,hash)=>{
                        if(err) throw err;
                        newUser.password = hash;
                        newUser.save()
                        .then(()=>{
                            const userDataInitialize = new userData({email,
                                submissions:[]});
                            userDataInitialize.save();
                            res.redirect(`/users/account/verify/send/${cryptr.encrypt(newUser.email)}/${cryptr.encrypt(newUser.name)}`);
                        })
                        .catch(err=>console.log(error))
                    })
                })
            }
        })
    }


})

//Login Handle

router.get('/login',(req,res)=>{
    if( req.query.origin )
  req.session.returnTo = req.query.origin
else
  req.session.returnTo = '/'

    res.render('login',{auth:req.isAuthenticated()});
})


router.post('/login',(req,res,next)=>{
    let redirect ='/users/login';

    passport.authenticate('local',{
        successRedirect:req.session.returnTo,
        failureRedirect:redirect,
        failureFlash:true
    })(req,res,next);
  });

//Logout Handler
router.get('/logout',(req,res)=>{
        req.logOut();
        req.flash('success_msg','You are logged out');
        res.redirect('/users/login');
});

//Account verification handle

router.get('/account/verify/send/:email/:name',(req,res)=>{
    const token = randomString.generate({length:64})
    const email = cryptr.decrypt(req.params.email);
    const name = cryptr.decrypt(req.params.name);
    User.findOneAndUpdate(
        {email},
        {verification:token})
    .then(user=>{
        if(!user){
        req.flash('error_msg','Account does not exist');
        res.redirect('/users/login');
        }
        else{

            let emailTemplate;
            ejs.renderFile('emailTemplate.ejs',{
                name,
                token
            })
            .then(result => {
                emailTemplate = result;
                const message = {
                  to: email,
                  from: { email: "afterlife.examengine@gmail.com", name: "Exam Engine" },
                  subject: "Confirm Your Email",
                  html: emailTemplate
                };
          sendGrid.send(message);
          res.render('./verification/email',{
              auth:req.isAuthenticated(),
              name,
              email
          });
        })
        }
    })
})

router.get('/account/confirm/:token',(req,res)=>{
    res.render('./verification/login',{
        auth:req.isAuthenticated(),
        token:req.params.token,
        message:'Please log in first'
    })
})
router.post('/account/confirm/:token',(req,res)=>{
    let errors=[];
    const {email,password}=req.body;
    User.findOne({email})
    .then(user=>{
        if(!user){
            errors.push({message:'Account does not exist'});
           
            res.render('./verification/login',{
                errors,
                token:req.params.token,
                auth:req.isAuthenticated()
            })
        }
        else{
            bcrypt.compare(password,user.password,(err,isMatch)=>{
                if(err) throw err;

                if(isMatch){
                    const token = req.params.token.slice(0,64);
                    if(token==user.verification){
                        user.verified = true;
                        user.verification='';
                        user.save();
                        res.render('./verification/confirm',{
                            auth:req.isAuthenticated(),
                            name:user.name,
                            email:user.email
                        })
                    }
                    else{
                        res.render('./verification/unauthorized',{
                            auth:req.isAuthenticated(),
                        })
                    }
                }
                else{
                    errors.push({message:'Password Incorrect'});
                    res.render('./verification/login',{
                        errors,
                        email,
                        token:req.params.token,
                        auth:req.isAuthenticated()
                    })
                }
            })

        }
    })

    
})

router.get('/forgot',(req,res)=>{
    res.render('./forgot/email',{
        auth:req.isAuthenticated(),
    })
})

module.exports = router;