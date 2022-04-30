
const person1 ={
  name:'Ron',
  age: 19,
  occupation:'Student'
};

// const inject = `<table>
// <tr >
//   <th>Name</th>
//   <th>Age</th>
//   <th>Occupation</th>
// </tr>
// <tr>
//   <td>${person1.name}</td>
//   <td>${person1.age}</td>
//   <td>${person1.occupation}</td>
// </tr>
// </table>`;
//document.body.innerHTML=inject;


//using literal for injecting data of 3 five with less number of html code.


const persons={
  name:['Ron','James','Max'],
  age:[19,20,23],
  occupation:['Student','Engineer','Salesman']
}

let inject =`
    <table>
      <tr>
      <th>Name</th>
      <th>Age</th>
      <th>Person</th>
      </tr>
`;
for(let i=0;i<persons.age.length;i++){
  inject= inject +
    `
      <tr>
      <td>${persons.name[i]}</td>
      <td>${persons.age[i]}</td>
      <td>${persons.occupation[i]}</td>
      </tr>
    `;
}

inject =inject+`</table>`
document.body.innerHTML=inject;