const mongoose = require('mongoose');

const documentSchema = new mongoose.Schema({
            title:{
                type:String,
                required: true                
            },
            admin:{
                type:String,
                required:true
            },
            type:{
                type:String,
                required: true                
            },
            nquestions:{
                type:Number,
                required: true                
            },
            paperid:{
                type:String,
                required:false,
                default:false
            },
            date:{
                type:Date,
                default:Date.now
            },
            enrolments:{
                type:Object,
                required:true
            }
});

const document = mongoose.model('documents',documentSchema);

module.exports = document;