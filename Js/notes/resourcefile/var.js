
function letTest() {
    let x = 1;
    {
      let x = 2;  // different variable
      console.log(x);  // 2
    }
    console.log(x);  // 1
  }
console.log(x); //
'Uncaught ReferenceError: x is not defined'


let x;
typeof(x)
'undefined'

x=1;
typeof(x)
'number'

x='a';
'a'
typeof(x)
'string'

x=1.23;
1.23
typeof(x)
'number'

x=true;
true
typeof(x)
'boolean'

x={a:1,b:1}
{a: 1, b: 1}
typeof(x)
'object'

x=null;
null
typeof(x)
'object'

let x = function(){}
typeof(x)
'function'

x= new Date();
Wed Jan 26 2022 22:05:31 GMT+0530 (India Standard Time)
typeof(x)
'object'

x=new RegExp('ab+c');
typeof(x)
'object'