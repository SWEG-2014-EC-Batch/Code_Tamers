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