let checkbox = document.getElementById('toggle');
toggle.addEventListener("click", () =>{
  document.body.classList.toggle("dark-bg");
  checkbox.classList.toggle("dark-checkbox");
})
