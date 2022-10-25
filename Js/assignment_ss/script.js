var count =0;
function addRow() {
    var name = document.querySelector('#name').value;
    if(name==''){
        alert("Please enter your name!");
        return;
    }
    var email=document.querySelector('#email').value;
    if(validateEmail(email)==null){
        alert("You have entered an invalid email address!");
        return;
    };
    var website=document.querySelector('#website').value;
    if(validateWebsite(website)==null){
        alert("You have entered an invalid website!");
        return;
    }
    var image=document.querySelector('#image-link').value;
    if(validateImageLink(image)==null){
        alert("You have entered an invalid image link!");
        return;
    }
    var gender;
    var male = document.querySelector('#male').checked;
    var female = document.querySelector('#female').checked;
    if(male==false && female==false){
        alert("Please specify your Gender!");
        return;
    }
    if(male){
        gender='Male';
    }
    else{
        gender='Female';
    }
    var skills=[];
    var java = document.querySelector('#java');
    var html = document.querySelector('#html');
    var css = document.querySelector('#css');
    if(java.checked){
        skills.push('Java');
    }
    if(html.checked){
        skills.push('HTML');
    }
    if(css.checked){
        skills.push('CSS');
    }


    var table= document.querySelector('table');
    // Insert a row at the end of the table
    let newRow = table.insertRow(-1);
    count++;
    if(count%2==0){
        newRow.setAttribute('class','row-even');
    }
   

    // Insert a cell in the row at index 0
    let newCell = newRow.insertCell(0);
    let newCell2 = newRow.insertCell(1);
    var col1HTML=`
    <div class="tab-name">
      ${name}
    </div>
    <div>
        ${gender}
    </div>
    <div>
        ${email}
    </div>
    <div>
        <a href="${website}" target="_blank">${website}</a>
    </div>
    <div>
        ${skills}
    </div>
    `;
    var outerDiv = document.createElement('div');
    outerDiv.innerHTML=col1HTML;
    newCell.appendChild(outerDiv);

    var outerDiv2 = document.createElement('div');
    outerDiv2.setAttribute('class','image-div');
    var col2HTML=`<img src="${image}" alt="" class="tab-image">`;
    outerDiv2.innerHTML=col2HTML;
    //let newText2 = document.createTextNode(image);
    newCell2.appendChild(outerDiv2);
    clearAll();
  }

  function clearAll(){
   document.querySelector('#name').value='';
   document.querySelector('#email').value='';
    document.querySelector('#website').value='';
    document.querySelector('#image-link').value='';
    document.querySelector('#male').checked=false;
   document.querySelector('#female').checked=false;
    document.querySelector('#java').checked=false;
    document.querySelector('#html').checked=false;
   document.querySelector('#css').checked=false;
  }

  const validateEmail = (email) => {
    return String(email)
      .toLowerCase()
      .match(
        /^(([^<>()[\]\\.,;:\s@"]+(\.[^<>()[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/
      );
  };
  const validateWebsite = (website) => {
    return String(website)
      .toLowerCase()
      .match(
        /^((https?|http):\/\/)+(www.)?[a-z0-9]+\.[a-z]+(\/[a-zA-Z0-9#]+\/?)*$/
      );
  };
  
  const validateImageLink = (imageLink) => {
    return String(imageLink)
      .toLowerCase()
      .match(
        /^http[^\?]*.(jpg|jpeg|gif|png|tiff|bmp)(\?(.*))?$/gmi
      );
  };
  