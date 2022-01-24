//using object1 as module
//Object1 is object container

const objectCumModule ={
    //key:value(pairs)
}
export default objectCumModule;

const object1 = {
    key1:"value1",
    key2:"value2",
    objectInsideObject :{
        key3:"value3",
        key4:"value4"
    },
    method1: function(key1,key2){
        this.objectInsideObject.key3=key1;
        this.objectInsideObject.key4=key2;
    }
};

export default object1;

const name = "Robert Prute";
typeof(name)
'string'
const name ={
    firstName: "Robert",
    lastName : "Prute"
}
undefined
typeof(name)
'object'