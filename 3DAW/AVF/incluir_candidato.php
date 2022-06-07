
<!DOCTYPE html>
<html>

<head>
    <meta charset="UTF-8">
    <title>Incluir Candidato</title>
</head>

<body>
<?php
    $ehPost = true;
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        
        $id = $_POST["id"];
        $cpf = $_POST["cpf"];
        $nome = $_POST["nome"];
        $email = $_POST["email"];
        $cargo = $_POST["cargo"];
        $sala = $_POST["sala"];


        $servidor = "localhost";
        $usuario = "root";
        $senha = "";
        $banco = "concurso";
        $conn = new mysqli($servidor, $usuario, $senha, $banco);
        if ($conn->connect_error) {
            die("Conexão com erro " . $conn->connect_error);
        }

        
        $sqlInsert = "INSERT INTO `concurso`(`id`, `cpf`, `nome`, `email`, `cargo`, `sala`) VALUES ('$id','$cpf','$nome','$email','$cargo','$sala')";
        $result = $conn->query($sqlInsert);
    } else {
        $ehPost = false;
    }
    ?>
    <a href="listar.php">Listar Candidato</a><br>
    <a href="incluir_fiscal.php">Incluir Fiscal</a><br>
    <a href="alterar.php">Alterar Sala</a><br>
    <br>
    <br>
    <hr>
    <h3><?php if ($ehPost) {
            echo "Candidato $nome incluído com sucesso";
        } ?>
    <hr>
    <form action="incluir_candidato.php" method="POST">
       <h1><br><br>Candidato</h1><br><br>
        Cpf: <input type="text" name="cpf"><br>
        nome: <input type="text" name="nome"><br>
        email: <input type="text" name="email"><br>
        cargo: <input type="text" name="cargo"><br>
        sala: <input type="number" name="sala"><br>
        <input type="submit" value="enviar">
    </form>
</body>

</html>