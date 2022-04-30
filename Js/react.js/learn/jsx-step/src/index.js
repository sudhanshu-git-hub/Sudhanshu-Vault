import React from 'react';
import ReactDOM from 'react-dom';

//creat react component
const code =`
    <h2>My image Title</h2>
    <br/>
    <p>MY image description</p>
`;
    const ComponentName = function(){
        return <div>Hi there!</div>;
    }
    const Component2 = function(){
        return <div>
            <h2>My image Title</h2>
            <br/>x
            <p>MY image description</p>
        </div>;
    }
// to display on Screen 
// ReactDOM.render(
//     <ComponentName/>,
//     document.querySelector('#root')
// );
// ReactDOM.render(
//     <Component2/>,
//     document.querySelector('.myClass')
// );


const Component3 = function(){
    return <div>
        <h2>Component 3</h2>
        <p>This is component3</p>
    </div>;
}

ReactDOM.render(<Component3/>,
document.querySelector('.myComponent3Class')
);