// class class_name{}

// const class_name = class {}

class Person{
    constructor(name,age,email,mobile){
        this.name =new String(name);
        this.age = new Number(age);
        this.email=new String(email);
        this.mobile= new Number(mobile);
    }
}

const person1 = new person('Vally',21,'vallyross@gmail.com',1234567890);

function Person(name,age,email,mobile){
    this.name =new String(name);
    this.age = new Number(age);
    this.email=new String(email);
    this.mobile= new Number(mobile);
}
const person1 = new Person('Vallyross',21,'vallyross@email.com',1234567890);
undefined
person1.name
String {'Vallyross'}
const add = function(){
    let addmember=23;
    console.log("Addmember value: "+ addmember);
}

