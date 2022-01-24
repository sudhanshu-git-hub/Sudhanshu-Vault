
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
const content = `
    <main>
        <article>
         <h1>Mouse: ${mouse.Company} ${mouse.Model}</h1>
        <ul>
            <li>Company:${mouse.Company}</li>
            <li>Model:${mouse.Model}</li>
            <li>Year:${mouse.Year}</li>
            <li>Purchase Date:${mouse.purchaseDate}</li>
            <li>Age:${mouse.getAge()}</li>
        </ul>
        </article>
    </main>

    `;


document.body.innerHTML = content;