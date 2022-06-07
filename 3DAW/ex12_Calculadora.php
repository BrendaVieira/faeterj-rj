   
<?php
function Soma($var1, $var2)
{
    return $var1 + $var2; //$Soma = $var1 + $var2?
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $var1 = $_POST["var1"];
    $var2 = $_POST["var2"];

    if ($var1 !=0 and $var2 !=0) {
        $Soma = Soma($var1, $var2);
    } else {
        $Soma = "Os valores devem ser diferentes de zero"; //echo<p>
    }
}
?>
<!DOCTYPE html>
<html>
	<head>
		<title>Calculadora de Soma</title>
	</head>
	<body>
		<h1>3DAW</h1>
		<br>
			<form action="calculadora2.php" method="post">
				<h3>Somar Dois Numeros:</h3>
				a: <input type="text" name="var1"> +
				b: <input type="text" name="var2"> =
				<?php if (!empty($Soma)) {
					echo "$Soma";
				} ?>
				<br><br>
				<input type="submit" value="Somar">
			</form>
		<br>
	</body>
</html>