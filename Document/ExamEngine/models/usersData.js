const mongoose = require('mongoose');
const { array } = require('@hapi/joi');
const userDataSchema  = new mongoose.Schema({
        email:{
            type:String,
            required:true,
        },
        submissions:{
            type:Object,
            require:true
        },
        date:{
            type:Date,
            default:Date.now
        }
})

const usersData = mongoose.model('usersdata',userDataSchema);

module.exports = usersData;