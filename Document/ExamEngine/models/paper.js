const mongoose = require('mongoose');
const { object } = require('@hapi/joi');

const paperSchema = new mongoose.Schema({
    documentid:{
        type:String,
        required:true
    },
    questions:{
        type:Object,
        required:true
    },
    options:{
        type:Object,
        required:true
    },
    answers:{
        type:Object,
        required:true
    }

})

const paper = mongoose.model('Papers',paperSchema);

module.exports = paper;