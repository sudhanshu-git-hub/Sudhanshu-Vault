import Mouse from "./mouse.js";

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
console.log(newMouse.Company);