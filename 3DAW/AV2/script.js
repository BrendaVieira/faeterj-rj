
function listaCliente() {
    let xmlHttp = new XMLHttpRequest();
    xmlHttp.onreadystatechange = function () {
        if (this.readyState == 4 && this.status == 200) {
            let obj = JSON.parse(this.responseText);
            for (i = 0; i < obj.length; i++) {
                let linha = obj[i];
                criarLinhaTabela(linha);
            }
        }
    }
    xmlHttp.open("GET", "http://localhost:8000/listar.php");
    xmlHttp.send();
}
function criarLinhaTabela(pobjReturnJSON) {
    let tr = document.createElement("tr"); 
    let td = document.createElement("td");
    let textnode = document.createTextNode(pobjReturnJSON.NOME);
    td.appendChild(textnode); 
    tr.appendChild(td);

    let td2 = document.createElement("td"); 
    textnode = document.createTextNode(pobjReturnJSON.ENDERECO);
    td2.appendChild(textnode); 
    tr.appendChild(td2);

    let td3 = document.createElement("td"); /
    textnode = document.createTextNode(pobjReturnJSON.POSTALCODE);
    td3.appendChild(textnode); 
    tr.appendChild(td3); 

    let td4 = document.createElement("td"); 
    textnode = document.createTextNode(pobjReturnJSON.PAIS);
    td4.appendChild(textnode); 
    tr.appendChild(td4); 

    let td5 = document.createElement("td"); 
    textnode = document.createTextNode(pobjReturnJSON.CPF);
    td5.appendChild(textnode); 
    tr.appendChild(td5); 

    let td6 = document.createElement("td"); 
    textnode = document.createTextNode(pobjReturnJSON.PASSAPORTE);
    td6.appendChild(textnode); 
    tr.appendChild(td6); 

    let td7 = document.createElement("td"); 
    textnode = document.createTextNode(pobjReturnJSON.EMAIL);
    td7.appendChild(textnode); 
    tr.appendChild(td7); 

    let td8 = document.createElement("td"); 
    textnode = document.createTextNode(pobjReturnJSON.DATANASCIMENTO);
    td7.appendChild(textnode); 
    tr.appendChild(td8); 


    let td9 = document.createElement("td"); 
    let editarLink = document.createElement("A");
    let nomeEditarLink = document.createTextNode("Editar");

    editarLink.appendChild(nomeEditarLink);
    td9.appendChild(editarLink); 
    let space = document.createTextNode("  /  ");
    td9.appendChild(space);
    let excluirLink = document.createElement("A");
    let nomeExcluirLink = document.createTextNode("Excluir");
    excluirLink.setAttribute("href", "https://google.com");
    excluirLink.appendChild(nomeExcluirLink);
    td9.appendChild(excluirLink);
    tr.appendChild(td8);

    let tr_fim = document.getElementById("ultimaLinha");
    tr_fim.parentNode.insertBefore(tr, tr_fim);
}

//cadastrar

function NomeValido(Nome){
    if (Nome == "") {
        return false;
    }
    return true;
}
function emailValido(Email) {
    let reg = /\S+@\S+\.\S+/;
    return reg.test(Email);
}
function CPFValido(Cpf) {

}
function ValidarDigCPF(CPF) {
    let Soma = 0;
    let Resto = 0;
    for (let i=1; i<=9; i++) {
        Soma = Soma + parseInt(pCPF.substring(i-1, i)) * (11 - i);
    }
    Resto = (Soma * 10) % 11;
    if (Resto == 10) Resto = 0;
    if (Resto != parseInt(pCPF.substring(9, 10))) return false;

    Soma = 0;
    for (let i=1; i<=10; i++) {
        Soma = Soma + parseInt(pCPF.substring(i-1, i)) * (12 - i);
    }
    Resto = (Soma * 10) % 11;
    if (Resto == 10) Resto = 0;
    if (Resto != parseInt(pCPF.substring(10, 11))) return false;
    return true;
}

function ValidarForm() {
    let objForm = document.getElementById("idReserva");
    console.log("objForm: " + objForm.innerHTML);
    
    let strMarca = document.getElementById("quarto").value;
    let strModelo = document.getElementById("cama").value;
    let strAssentos = document.getElementById("cliente").value;
    let strBanheiro = document.getElementById("dataEntrada").value;
    let strAr_condicionado = document.getElementById("dataSaida").value;
    console.log("nome:" + strQuarto + "  endereco: " + strCama + "  cpf:" + strCliente + "  Passaporte: " + strEntrada + "  postalCode: " + strSaida);
    EnviarForm(strQuarto, strCama, strCliente, strEntrada, strSaida);
    
}
function EnviarForm(pQuarto, pCama, pCliente, pdataEntrada, pdataSaida) {
    let xmlHttp = new XMLHttpRequest();
    xmlHttp.onreadystatechange = function() {
        if (this.readyState == 4 && this.status == 200) {
            console.log("Chegou resposta: " + this.responseText)
            document.getElementById("msg").innerHTML = this.responseText;
        }
    }
    xmlHttp.open("GET", "http://localhost:8000/adicionar.php?marca=" + pMarca + 
        "&quarto=" + pQuarto + 
        "&cama=" + pCama + 
        "&cliente=" + pCliente + 
        "&dataEntrada=" + pdataEntrada + 
        "&dataSaida=" + pdataSaida + 
    xmlHttp.send();
    console.log("Enviei requisição");
    location.reload();
}