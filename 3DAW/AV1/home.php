<!DOCTYPE html>
<html lang="pt-br">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Criar Pergunta</title>

    <link rel="stylesheet" href="style.css">

</head>

<body>
    <h1>Criar Pergunta</h1>

    <?php
        require "perguntas.php";

        if ($_SERVER['REQUEST_METHOD'] == 'GET') {
            echo "<div class='container'>";
            echo "<table>
                <tr>
                    <th>Texto Pergunta</th>
                    <th>Quantidade de Pontos</th>
                    <th>Grau de dificuldade</th>
                    <th>Função</th>
                </tr>";

        if (file_exists($csv)) {

            $output = fopen($csv, 'r');
                    
                    while   (list($id, $txt, $qtd, $grau) = fgetcsv($output, 1024, ',')) {
                        echo "<tr>";
                        echo "<td>" . strtoupper($txt) . "</td>";
                        echo "<td>$qtd</td>";
                        echo "<td>" . strtoupper($grau) . "</td>";
                        echo "<td>
                                    
                                <a href='alterar_pergunta.php?id=" . $id . "'><br><button class='edit_btn'>Alterar</button></a>
                                <a href='excluir_pergunta.php?id=" . $id . "'><button class='del_btn'>Excluir</button></a>
                                <a href='listar_uma_pergunta.php?id=" . $id . "'><button class='add_btn'>Listar Uma Pergunta</button></a>
                                <a href='listar_todas_perguntas.php?id=" . $id . "'><button class='add_btn'>Listar Todas</button></a><br>
                               
                                </td>";
                        echo "</tr>";
                        
                    }
            fclose($output);
        }
        echo "</table>";
        echo "</div>";

        echo "<div class='container'>
        <form action='' method='post'>
            <table class='criar'>
                <tr>
                    <td>Pergunta: </td>
                    <td><input type='text' name='txt' id='txt' size='60' required></td>
                </tr>
                <tr>
                    <td>Quantidade de pontos: </td>
                    <td><input type='text' name='qtd' size='60' required></td>
                </tr>
                <tr>
                    <td>Grau de dificuldade: </td>
                    <td><input type='text' name='grau'  size='60' required></td>
                </tr>
               
            </table>
            <input class='add_btn' type='submit' value='Adicionar Pergunta'>
        </form>
    </div>";
    }
    ?>

    <?php
    if ($_SERVER['REQUEST_METHOD'] == 'POST') {
        $txt = strtolower($_POST['txt']);
        
        $id = time() * rand(1, 9);
        
        $linha = array(
            $id,
            $txt,
            $_POST['qtd'],
            $_POST['grau'],
        );
        if (file_exists($csv)) {
            $output = fopen($csv, 'a');
            fputcsv($output, $linha);
            fclose($output);
            echo "<p class='center'>Pergunta inserida com sucesso!</p>";
        } else {
            $output = fopen($csv, 'w');
            fputcsv($output, $linha);
            fclose($output);
            echo "<p class='center'>Pergunta inserida com sucesso!</p>";
        }
        echo "<a href='home.php'><button class='return_btn'>Voltar</button></a>";
    }
    ?>

</body>

</html>