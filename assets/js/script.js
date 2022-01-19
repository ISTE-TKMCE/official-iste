var p=document.querySelectorAll(".crd")

p[0].addEventListener("mouseovver",function(){
   p.classList.remove('shadow-sm')
   p.classList.add('shadow-lg')
})
p[1].addEventListener("mouseover",function(){
    // p.classList.remove('shadow-sm')
    // p.classList.add('shadow-lg')
 })
 p[2].addEventListener("mouseover",function(){
    console.log("working")
 })
 p[3].addEventListener("mouseover",function(){
    console.log("working")
 })