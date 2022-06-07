<!DOCTYPE html>
<html>

<head>
    <meta charset="UTF-8">
    <title>Banco de Dados</title>
</head>

<body>
  <form action="listar.php" method="post">
        <input type="submit" name="op">
        <br>
    </form>

    <?php
        if ($_SERVER["REQUEST_METHOD"] == "POST") 
        
         $servidor = "localhost";
            $usuario = "root";  
            $senha = ""; 
            $banco = "concurso"; 

        $conn = new mysqli($servidor, $usuario, $senha, $banco);

        if ($conn->connect_error) {

            die("Conexão com erro " . $conn->connect_error);
            
        }

         $sql = "SELECT * FROM `concurso` ";

         $result = $conn->query($sql); 

        echo "<table border='1'>";
        echo "<tr>";
        echo "<th>Cpf</th>
            <th>Nome</th>
            <th>Email</th>
            <th>Cargo</th>
            <th>Sala</th>";
    
       
        while ($linha = $result->fetch_assoc()) 
        {
            echo "<tr>";
            echo "<td> " . $linha["id"] . "</td>"; 
            echo "<br>";
            echo "<td> " . $linha["cpf"] . "</td>";
            echo "<br>";
            echo "<td> " . $linha["nome"] . "</td>";
            echo "<br>";
            echo "<td> " . $linha["email"] . "</td>";
            echo "<br>";
            echo "<td> " . $linha["cargo"] . "</td>";
            echo "<br>";
            echo "<td> " . $linha["sala"] . "</td>";
            echo "<br>";
            echo "<tr>";
        }
        echo "</table>";
    ?>
</body>

</html>
