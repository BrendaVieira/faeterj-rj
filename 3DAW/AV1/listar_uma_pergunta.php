
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Listar uma Pergunta</title>
    <style>

        table {
            width: 100%;
            border: 1px solid #000;
            margin: 20px auto;
            background-color: #d2e3e6;
        }

        th {
            background-color: #d2e3e6;
        }

        td {
            padding: 5px 5px;
            text-align: center;
        }
        h1 {
            text-align: center;
        }
        </style>
</head>
<body>
    <h1>Listar uma Pergunta</h1>

    <table>
    <tr>
        <th>Texto Pergunta</th>
        <th>Quantidade de Pontos</th>
        <th>Grau de dificuldade</th>
    </tr>
<?php
	$i;
	
	$txt = "como contratar um novo funcionário";
	$qtd = "60";
	$grau = "MEDIA";
	
		global $txt, $qtd, $grau;

		echo "<td>$txt</td><br>";
		echo "<td>$qtd</td><br>";
		echo "<td>$grau</td><br>";				
?>	   
</table>
    <div>
        <a href='home.php'><button class='return_btn'>Voltar</button></a>
    <div>
</body>
</html>