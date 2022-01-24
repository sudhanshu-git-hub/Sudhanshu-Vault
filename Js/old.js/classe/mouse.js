
const dummyMouse= class{};

class Mouse{
    constructor(
        Company,
        Model,
        Year,
        button,
        click,
        // scroll,
        // doScroll,
        // pressButton
    )
        {
            this.Company=Company;
            this.Model=Model;
            this.Year= Year;
            this.button=button;
            this.scroll=0;
            this.click=click;
        }
        doScroll(value){
            this.scroll= value;
            console.log("Scroll value set");
        }
        pressButton(whichButton){
            if(this.button[whichButton]){
                this.click[whichButton]=true;
                console.log("Button click: " +whichButton);
            }
            else{
                console.log("This Button is not present in this model");
            }
        }
}

const newMouse = new Mouse(
    "Ant Esports",
    "GM200W",
    2020,
    {
        left:true,
            right:true,
            middle:true,
            dpiUp:true,
            dpiDown:true,
            forward:true,
            backward:true,
            keypad:false
    },
    {
        left:false,
        right:false,
        middle:false,
        dpiUp:false,
        dpiDown:false,
        forward:false,
        backward:false,
        keypad:false
    }
);
//export default Mouse;