void Hanoi(int n, char O, char D, char aux)

n = numero de discos

O = Origem da troca

D = Destino da troca

aux = pino auxiliar

```c
{
	if (n>0)
	{
		Hanoi(n-1, O, aux, D);
		printf("%c -> %c\n", O, D);
		Hanoi(n-1, aux, D, O);
	}
}

```
