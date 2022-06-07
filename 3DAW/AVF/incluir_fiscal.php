
<!DOCTYPE html>
<html>

<head>
    <meta charset="UTF-8">
    <title>Incluir Fiscal</title>
</head>

<body>
<?php
    $ehPost = true;
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        
        $cpf = $_POST["cpf"];
        $nome = $_POST["nome"];
        $sala = $_POST["sala"];

        $servidor = "localhost";
        $usuario = "root";
        $senha = "";
        $banco = "concurso";
        $conn = new mysqli($servidor, $usuario, $senha, $banco);
        if ($conn->connect_error) {
            die("Conexão com erro" . $conn->connect_error);
        }

        
        $sqlInsert = "INSERT INTO `fiscal`(`cpf`, `nome`, `sala`) VALUES ('$cpf ','$nome','$sala')";
        $result = $conn->query($sqlInsert);
    } else {
        $ehPost = false;
    }
    ?>
    <br>
    <a href="listar.php">Listar Candidato</a><br>
    <a href="incluir_candidato.php">Incluir Candidato</a><br>
    <br>
    <hr>
    <h3><?php if ($ehPost) {
            echo "Fiscal $nome incluído com sucesso";
        } ?>
    <hr>
    <form action="incluir_fiscal.php" method="POST">
    <h1><br><br>Fiscal</h1><br><br>
        CPF: <input type="number" name="cpf"><br>
        nome: <input type="text" name="nome"><br>
        sala: <input type="number" name="sala"><br>
        <input type="submit" value="enviar">
    </form>
</body>

</html>