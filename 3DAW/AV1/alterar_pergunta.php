<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Alterar Pergunta</title>

    <link rel="stylesheet" href="style.css">

</head>
<body>
    <h1>Alterar Pergunta</h1>

<?php
        require "perguntas.php";

        if ($_SERVER['REQUEST_METHOD'] == 'GET') {
            echo "<div class='container'>";
            echo "<table>
            <tr>
                <th>Texto Pergunta</th>
                <th>Quantidade de Pontos</th>
                <th>Grau de dificuldade</th>
            </tr>";

if (file_exists($csv)) {

    $output = fopen($csv, 'r');
            
    while   (list($id, $txt, $qtd, $grau) = fgetcsv($output, 1024, ',')) {
        echo "<tr>";
        echo "<td>" . strtoupper($txt) . "</td>";
        echo "<td>$qtd</td>";
        echo "<td>" . strtoupper($grau) . "</td>";
        
        echo "</tr>";
            }
    fclose($output);
}
echo "</table>";
echo "</div>";


echo "<div class='container'>
<form action='alterar_pergunta.php' method='post'>
    <table class='criar'>
    <tr>
        <td>Pergunta: </td>
        <td><input type='text' name='txt' size='30' required></td>
    </tr>
    <tr>
         <td>Quantidade de pontos: </td>
        <td><input type='text' name='qtd' size='30' required></td>
    </tr>
    <tr>
        <td>Grau de dificuldade: </td>
        <td><input type='text' name='grau'  size='30' required></td>
    </tr>

    </table>
    <input class='add_btn' type='submit' value='Alterar Pergunta'>
</form>
</div>";
}
?>

<?php
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
$txt = strtolower($_POST['txt']);

$grau = strtolower($_POST['grau']);

$linha = array(
    $txt,
    $grau,
    $_POST['id'],
    $_POST['qtd'],  
);
    $output = fopen($csv, 'a'); 
    fputcsv($output, $linha);
    fclose($output);
    echo "<p class='center'>Pergunta alterada com sucesso!</p>";
    
    echo "<a href='home.php'><button class='return_btn'>Voltar</button></a>";
}
?>

</body>

</html>