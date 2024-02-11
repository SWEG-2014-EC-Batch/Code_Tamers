let fileInput = document.getElementById("pic");
let imageContainer = document.getElementById("images");
let numOfFiles = document.getElementById("num-of-files");


function preview() {
    imageContainer.innerHTML = "";
    numOfFiles.textContent = `${fileInput.files.length} Files Selected`;

    for(i of fileInput.files){
        let reader = new FileReader();
        let figure = document.createElement("figure");
        let figcap = document.createElement("figcaption");

        figcap.innerText = i.name;
        figure.appendChild(figcap);
        reader.onload=()=>{
            let img = document.createElement("img");
            img.setAttribute("src", reader.result);
            figure.insertBefore(img,figcap);
        }
        imageContainer.appendChild(figure);
        reader.readAsDataURL(i);
    }
}

//get the form element
const form = document.getElementById('forM');

//adding event listener to form submission
form.addEventListener('submit', function(event){
    event.preventDefault(); //prevent submission

    //validating car info
    var make = document.getElementById('make').value;
    var model = document.getElementById('model').value;
    var year = document.getElementById('year').value;
    var fuel = document.getElementById('fuel').value;
    var price = document.getElementById('price').value;

    //validation check
    if(make.trim() === '')
    {
        alert('please Enter the make of the car!');
        return;
    }
    if(model.trim() === '')
    {
        alert('please enter the model of the car!');
        return;
    }
    if(year.trim() === '' || (parseInt(year)<=1990 || parseInt(year)>=2024))
    {
        alert('please enter the year of the car or even the appropriate one!');
        return;
    }
    if(fuel.trim() === '')
    {
        alert('please enter the fuel of the car!');
        return;
    }
    if(isNaN(price) || parseInt(price)<=0)
    {
        alert('enter valid price of the car!');
        return;
    }


    //for the user info
    var alias = document.getElementById('alias').value;
    var tg = document.getElementById('tg').value;
    var phone = document.getElementById('phone').value;

    if(alias.trim()==='')
    {
        alert('Enter your name please!');
        return;
    }
    if(tg.trim()==='')
    {
        alert("Enter your telegram user name please!");
        return;
    }
    if(phone.trim()==='')
    {
        alert("Can you enter your phone please!");
        return;
    }
    if(!(/^\+?\d{10,14}$/.test(phone))){
        alert('please please please enter your phone in correct format and length!');
        return;
    }

    //if all satisfy the condition
    alert('Form Submitted Successfully!');
    form.reset();
    
});

// animation for the label elements
const observer = new IntersectionObserver((entries) => {
    entries.forEach((entry) => {
        if(entry.isIntersecting){
            entry.target.classList.add('show');
        }
    });
});

const hiddenElmts = document.querySelectorAll('.hidden');
hiddenElmts.forEach((el) => observer.observe(el));

