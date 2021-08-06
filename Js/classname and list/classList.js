/*

    document.querySelector("h1").class
        class-1
         document.querySelector("h1").class ="new-class"
    
    it creates problem when we have mutliple class
    <li class="packprop backpack__volume">Volume:<span> 30l</span></li>

    document.querySelector(".backpack_volume").className = "new-class"
     resultant is <li class="new-class">Volume:<span> 30l</span></li>

     it override all previous class with new one 
     therefore we classList in place of className

     document.querySelector(".backpack__color").classList.replace("backpack__color","new-class")


*/