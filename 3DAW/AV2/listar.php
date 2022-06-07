
<?php
require "conex.php";

$sql = "SELECT * FROM CLIENTE";
$result = $conn->query($sql);

$arrayCliente[] = array();
$i = 0;
While ($linha = $result->fetch_assoc()){
    $arrayCliente[$i] = $linha;
     $i++;
}
echo json_encode($arrayCliente, JSON_UNESCAPED_UNICODE);
?>