//Import mongo
const mongoose = require('mongoose');
const { boolean, string } = require('@hapi/joi');

//Create Schema
const userSchema = new mongoose.Schema({
        name:{
            type:String,
            required:true
        },
        email:{
            type:String,
            required:true
        },
        password:{
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
        },
        verified:{
            type:Boolean,
            required:true
        },
        verification:{
            type:String
        }
})

//Set Model
const User = mongoose.model('User',userSchema);

//export Model
module.exports = User;

