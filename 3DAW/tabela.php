<?php 

	$frutas = array( "Maçã", "Banana", "Abacaxi");
	$precos = array( 3.0, 4.0, 5.0);
	$codigos = array ("mc123","bn123","ab123");
?>

<!DOCTYPE html>
<html>
<body>

<h1>Tabela Hortifrutti</h1>

<table border="1">

	<tr>
		<th>Frutas</th>
		<th>Preços</th>
		<th>Códigos</th>
	</tr>
	
	<?php
	
		for ($x=0; $x<=2; $x++)
		{
			echo "<tr>";
			echo "<td>$frutas[$x]</td>";
			echo "<td>$precos[$x]</td>";
			echo "<td>$codigos[$x]</td>";
			echo "</tr>";
		}
	?>	
</table>

</body> 
</html>
