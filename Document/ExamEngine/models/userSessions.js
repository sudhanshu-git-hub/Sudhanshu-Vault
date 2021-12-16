//Import mongo
const mongoose = require('mongoose');

//Create Schema
const userSession = new mongoose.Schema({
    email:{
        type:String,
        required:true
    },
    date:{
        type:Date,
       default: Date.now
    },
    ip:{
        type:String,
        required:true
    }
})

//Set Model model(1. Collection name)
const userSessions = mongoose.model('usersSession',userSession);

//export Model
module.exports = userSessions;