
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Listar Todas as Perguntas</title>
    <style>

        table {
            width: 100%;
            border: 1px solid #000;
            margin-top:-200px;
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
    <h1>Listar Todas as Perguntas</h1>

    <table>
    	
        <tr>
            <th>Texto Pergunta</th>
            <th>Quantidade de Pontos</th>
            <th>Grau de dificuldade</th>
        </tr>
<?php
	$i;
	$txt = array ("como gerenciar o andamento de um projeto","como resolver um problema administrativo", "como contratar um novo funcionário", "como conceder um empréstimo", "como fechar contrato");
	$qtd = array ("10","60", "100", "100", "100");
	$grau = array ("Facil","Media","Dificil", "Dificil", "Dificil");
	
        //Função
        function listPer($i)  {

		global  $txt, $qtd, $grau;

		echo "<tr><td>$txt[$i]</td>";
		echo "<td>$qtd[$i]</td>";
        echo "<br>";
		echo "<td>$grau[$i]</td>";
        echo "<br></tr>";
			
	}
	for ($i=0; $i<count($txt); $i++){
		listPer($i);
        echo "<br>";		
    }
    echo "<a href='home.php'><button class='return_btn'>Voltar</button></a>";

?>		
    </table>
</body>
</html>