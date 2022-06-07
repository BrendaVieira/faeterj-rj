<!DOCTYPE html>
<html>
<head>
</head>
<body>
<h1>3DAW</h1>
<?php
$x = $_GET["var1"];
$y = $_GET["var2"];

if ( $x == $y) {
    echo "<p>x é igual a y, x = $x</p>";
} else {
    echo "<p>x não é igual a y, x = $x e y = $y</p>";
}
// A expressao abaixo retorna -1 quanto x<y
// Retorna = quando sao iguais
// Retorna +1 quando x>y
echo ( $x <=> $y);
?>
<br>
<form action="ex10_ComparaValores.php" method=GET>
    <h3>Valores</h3>
    <input type=number name="var1"> +
    <input type=number name="var2"> =
    <br><br>
    <input type="submit" value="Comparar">
</form>
<br>
</body>
</html>
