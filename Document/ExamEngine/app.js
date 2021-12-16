const express = require('express');
const expressLayout = require('express-ejs-layouts');
const app = express();
const flash = require('connect-flash');
const session = require('express-session');
const cors = require('cors');
app.use(cors());
const sendGrid = require('@sendgrid/mail');

const passport = require('passport');
//passport Config
require('./config/passport')(passport);
app.use('/public', express.static('./public'));

//cors
//app.use(cors());

//BodyParse
app.use(express.urlencoded({extended:false}));
app.set('trust proxy', true);


//Datbase Configuration
const mongoose = require('mongoose');
const datbaseKey = require('./config/key').MongoURI;
mongoose.connect(datbaseKey,{useNewUrlParser:true,useUnifiedTopology: true})
.then(()=>console.log('Connected to Database'))
.catch(err=>console.log(err));
mongoose.set('useFindAndModify', false);

//EJS Configuration
app.use(expressLayout);
app.set('view engine','ejs')

//SendGrid 
const sgKey = require('./config/key').SendGridAPI;
sendGrid.setApiKey(sgKey);


//Express --Flasher
app.use(session({
    secret: 'secret',
    resave: true,
    saveUninitialized: true
  }));


  
//Passport Middleware
app.use(passport.initialize());
app.use(passport.session());

//Flasher ((Global Variables))
app.use(flash());
app.use((req,res,next)=>{
    res.locals.success_msg=req.flash('success_msg');
    res.locals.error_msg=req.flash('error_msg');
    res.locals.error=req.flash('error');
    next();
});

//Import routes 
const homeRoute = require('./routes/index');
const userRoute = require('./routes/users');



//Use Routes
app.use('/',homeRoute);
app.use('/users',userRoute);


const PORT = process.env.PORT || 5000;
app.listen(PORT,console.log(`Server started on port:${PORT}`));
