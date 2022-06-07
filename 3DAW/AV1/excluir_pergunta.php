<!DOCTYPE html>
<html>

<head>
    <meta charset="UTF-8">
    <title>Excluir Pergunta</title>

    <link rel="stylesheet" href="style.css">

</head>

<body>
    <h1>Excluir Pergunta</h1>

    <?php
    require "perguntas.php";

    if ($_SERVER['REQUEST_METHOD'] == 'GET') {
        echo "<div class='container'>";
        echo "<form action='' method='post'>";
        echo "<table>
        <tr>
            <th>Texto Pergunta</th>
            <th>Quantidade de Pontos</th>
            <th>Grau de dificuldade</th>
            <th>Função</th>
        </tr>";

        if (file_exists($csv)) {
            $id = $_GET['id'];
            $output = fopen($csv, 'r');
            $temp = fopen("temp.csv", 'w');
            $tempUser = fopen("tempUser.csv", 'w');
            while (($data = fgetcsv($output, 1024)) != FALSE) {
                if (reset($data) == $id) {
                    fputcsv($tempUser, $data);
                    continue;
                }
                fputcsv($temp, $data);
            }
            fclose($temp);
            fclose($output);
            fclose($tempUser);

            $output = fopen("tempUser.csv", 'r');

            while   (list($id, $txt, $qtd, $grau) = fgetcsv($output, 1024, ',')) {
                echo "<tr>";
                echo "<td>" . strtoupper($txt) . "</td>";
                echo "<td>$qtd</td>";
                echo "<td>" . strtoupper($grau) . "</td>";
                echo "<td><input class='del_btn' type='submit' value='Excluir Pergunta'></td>";
                echo "</tr>";
            }
            fclose($output);
            echo "</table>";
            echo "</form>";
            echo "</div>";
        }
    }
    ?>

    <?php
    if ($_SERVER['REQUEST_METHOD'] == 'POST') {
        unlink("tempUser.csv");
        unlink($csv);
        rename("temp.csv", $csv);
        echo "<p class='center'>Pergunta excluída com sucesso!</p>";
        echo "<a href='home.php'><button class='return_btn'>Voltar</button></a>";
    }
    ?>

</body>

</html>