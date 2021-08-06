/*
        declaration:object
        
        object-prefix object-name = {key :value};
        key:string
        value:string,object,function

*/

const mouse ={
        Company:"Ant Esports",
        Model:"GM200W",
        Year:2020,
        button:{
                left:true,
                right:true,
                middle:true,
                dpiUp:true,
                dpiDown:true,
                forward:true,
                backward:true,
                keypad:false
        },
        scroll:0,
        doScroll:function(value){
                this.scroll=value;
                console.log("Scroll value set");
        },
        click:{
                left:false,
                right:false,
                middle:false,
                dpiUp:false,
                dpiDown:false,
                forward:false,
                backward:false,
                keypad:false
        },
        pressButton:function(whichButton){
                //console.log(whichButton);
                if(this.button[whichButton]){
                        this.click[whichButton]=true;
                        console.log("Button pressed: "+whichButton);
                }
                else{
                        console.log("This button is not present in this model")
                }
        },
        purchaseDate:"1 July 2021",
        getAge: function(){
                const now = new Date();
                const purchaseDate = new Date(this.purchaseDate);
                let elapsed = now - purchaseDate;//you get milisecond
                let numberOfDays = Math.floor(elapsed/(1000*60*60*24));
                return numberOfDays;
        }
}

//accessing object
//dot and bracket
//dot numeric wont allow numeric start but html does allow in class and is name therefore dot notation create problem

//var query = "Model";
//console.log("Query Result: "+mouse[query]);

export default mouse;