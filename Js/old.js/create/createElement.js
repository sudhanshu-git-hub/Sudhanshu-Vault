const newEle = document.createElement("article")
undefined
newEle.classList.add("backpack")
undefined
newEle.setAttribute("id","main")
undefined
newEle
<article class=​"backpack" id=​"main">​</article>​
const newHead = document.createElement("h1")
undefined
newHead.innerText ="Sudhanshu"
"Sudhanshu"
newHead
<h1>​Sudhanshu​</h1>​
newEle.append(newHead)
undefined
newEle
<article class=​"backpack" id=​"main">​<h1>​Sudhanshu​</h1>​</article>​
const main = document.querySelector("main")
undefined
main.append(newEle)
undefined
main.removeChild(article)
VM1716:1 Uncaught ReferenceError: article is not defined
    at <anonymous>:1:18
(anonymous) @ VM1716:1
main.removeChild("article")
VM1746:1 Uncaught TypeError: Failed to execute 'removeChild' on 'Node': parameter 1 is not of type 'Node'.
    at <anonymous>:1:6
(anonymous) @ VM1746:1
const head  = document.querySelector("article")
undefined
head
<article class=​"backpack" id=​"main">​…​</article>​
      

      grid
    <h1>​Sudhanshu​</h1>​::after​</article>​
main.removeChild(head)
<article class=​"backpack" id=​"main">​…​</article>​
main.prepend(newEle)
undefined