
<?php
require "conex.php";

if ($_SERVER['REQUEST_METHOD'] == 'GET') {
    $nome = $_GET['nome'];
    $endereco = $_GET['endereco'];
    $postalcode = $_GET['postalcode'];
    $pais = $_GET['pais'];
    $cpf = $_GET['cpf'];
    $passaporte = $_GET['passaporte'];
    $email = $_GET['email'];
    $datanascimento = $_GET['datanascimento'];

}
$maxid = "SELECT MAX(ID) FROM CLIENTE;";
$max = $conn->query($maxid);

$sql = "INSERT INTO CLIENTE (NOME, ENDERECO, POSTALCODE, PAIS, CPF, PASSAPORTE, EMAIL, DATANASCIMENTO) VALUES ('$nome', '$endereço', '$postalcode', '$pais', '$cpf', '$passaporte', '$email', '$datanascimento');";

$result = $conn->query($sql);



?>