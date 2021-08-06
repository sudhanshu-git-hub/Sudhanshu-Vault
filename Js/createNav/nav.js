const nav  = document.createElement("nav")
undefined
nav
<nav>​</nav>​
const ul = document.createElement("ul");
undefined
ul
<ul>​</ul>​
cont li = document.createElement("li")
VM2853:1 Uncaught SyntaxError: Unexpected identifier
const li = document.createElement("li")
undefined
li
<li>​</li>​
li.innerHTML= "Home"
"Home"
li
<li>​Home​</li>​
ul.append("li")
undefined
ul
<ul>​li​</ul>​
ul.innerText=""
""
ul
<ul>​</ul>​
ul.append(li)
undefined
ul
<ul>​<li>​Home​</li>​</ul>​
li = document.createElement("li")
VM3370:1 Uncaught TypeError: Assignment to constant variable.
    at <anonymous>:1:4
(anonymous) @ VM3370:1
var li2 = document.createElement("li")
undefined
li2.innerText= "Store"
"Store"
li2
<li>​Store​</li>​
ul.append(li2)
undefined
ul
<ul>​<li>​Home​</li>​<li>​Store​</li>​</ul>​
li2.innerText="Contact"
"Contact"
ul.append(li2)
undefined
ul
<ul>​<li>​Home​</li>​<li>​Contact​</li>​</ul>​
li2 = document.createElement("li")
<li>​</li>​
li2.innerText= "store"
"store"
li2
<li>​store​</li>​
ul.insertBefore(li2,"last-child")
VM4141:1 Uncaught TypeError: Failed to execute 'insertBefore' on 'Node': parameter 2 is not of type 'Node'.
    at <anonymous>:1:4
(anonymous) @ VM4141:1
ul.append(li2)
undefined
ul
<ul>​<li>​Home​</li>​<li>​Contact​</li>​<li>​store​</li>​</ul>​
ul.setAttribute
ƒ setAttribute() { [native code] }
ul.classList.add("nav-list")
undefined
ul
<ul class=​"nav-list">​<li>​Home​</li>​<li>​Contact​</li>​<li>​store​</li>​</ul>​
nav
<nav>​</nav>​
nav.append(ul)
undefined
nav
<nav>​<ul class=​"nav-list">​<li>​Home​</li>​<li>​Contact​</li>​<li>​store​</li>​</ul>​</nav>​
document.body.append(nav)
undefined
document.removeChild(nav)
VM5079:1 Uncaught DOMException: Failed to execute 'removeChild' on 'Node': The node to be removed is not a child of this node.
    at <anonymous>:1:10
(anonymous) @ VM5079:1
document.body.removeChild(nav)
<nav>​…​</nav>​<ul class=​"nav-list">​…​</ul>​<li>​Home​</li>​<li>​Contact​</li>​<li>​store​</li>​</ul>​</nav>​
document.body.prepend(nav)
undefined
document.body.removeChild(nav)
<nav>​…​</nav>​
document.body.insertBefore(nav,main)
VM6399:1 Uncaught ReferenceError: main is not defined
    at <anonymous>:1:32
(anonymous) @ VM6399:1
document.body.insertBefore(nav,"main")
VM6436:1 Uncaught TypeError: Failed to execute 'insertBefore' on 'Node': parameter 2 is not of type 'Node'.
    at <anonymous>:1:15
(anonymous) @ VM6436:1
const main= document.querySelector("main")
undefined
ma9n
VM6632:1 Uncaught ReferenceError: ma9n is not defined
    at <anonymous>:1:1
(anonymous) @ VM6632:1
main
<main class=​"maincontent">​…​</main>​
document.body.insertBefore(nav,main)
<nav>​…​</nav>​
document.body.removeChild("nav")
VM7032:1 Uncaught TypeError: Failed to execute 'removeChild' on 'Node': parameter 1 is not of type 'Node'.
    at <anonymous>:1:15
(anonymous) @ VM7032:1
document.body.removeChild(nav)
<nav>​…​</nav>​
document.body.prepend(nav)
undefined
let navbar = document.querySelector("nav")
undefined
navbar
<nav>​<ul class=​"nav-list">​…​</ul>​</nav>​
document.querySelector("ul").style.textDecoration=none
VM7534:1 Uncaught ReferenceError: none is not defined
    at <anonymous>:1:51
(anonymous) @ VM7534:1
document.querySelector("ul").style.textDecoration="none"
"none"
document.querySelector("ul").style =""
""
document.querySelector("ul").style.listStyleType="none"
"none"
document.querySelector("ul").style.display="flex"
"flex"
document.querySelector("ul").style.display="inline"
"inline"
document.querySelector("ul").style.display="flex"
"flex"
document
#document
document.querySelector("ul").removeAttribute("style")
undefined
const style = document.createElement("style")
undefined
style
<style>​</style>​
document.head.prepend(style)
undefined
document.head.removeChild(style)
<style>​</style>​
const sr = document.querySelector("script")
undefined
sr
<script type=​"module" src=​"Backpack.js">​</script>​
document.head.insertBefore(style,sr)
<style>​</style>​
var styleTag = document.querySelector("style")
undefined
style
<style>​</style>​
document.querySelector("ul").style.listStyleType="none"
"none"
document.querySelector("ul").style.display="flex"
"flex"
document.querySelectorAll("li").(item => item.style.margin ="2px")
VM10433:1 Uncaught SyntaxError: Unexpected token '('
document.querySelectorAll("li").(item => item.style.margin ="2px";)
VM10440:1 Uncaught SyntaxError: Unexpected token '('
document.querySelectorAll("li").forEach(item => item.style.margin ="2px";)
VM10490:1 Uncaught SyntaxError: missing ) after argument list
document.querySelectorAll("li").forEach(item => item.style.margin ="2px")
undefined
document.querySelectorAll("li").forEach(item => item.style.margin ="8px")
undefined