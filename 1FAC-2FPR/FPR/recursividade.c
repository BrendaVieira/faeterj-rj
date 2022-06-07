## Recursividade
Trabalha-se com caso base e caso geral.

Aplicar ao problema uma solução menor.

# Fatorial recursivo

```c
/*
	FPR - Fundamentos de Programação
	Professor Leonardo Vianna

	Data: 18/05/2022
	
	Recursividade
	
	Fatorial: implementações iterativa e recursiva
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int fatorialI (int n);
int fatorialR (int n);

//implementação da função main
void main ()
{
	//declaração de variáveis
	int numero = 10;
	
	printf ("versao iterativa: %d! = %d\n\n", numero, fatorialI(numero));
	
	system ("pause");
	
	printf ("versao recursiva: %d! = %d\n\n", numero, fatorialR(numero));
}

//implementações das funções
int fatorialI (int n)
{
	int i, fat = 1;

	for (i=2;i<=n;i++)
	{
		fat *= i;
	}
		
	return fat;
}

int fatorialR (int n)
{
  if (n==0) //caso base
  {
    return 1;
  }
  else //caso geral
  {
    return n * fatorial (n-1);
  }
}
```
## os return's são feitos um a um inversamente

---

# Multiplicação recursiva
```c
/*
	FPR - Fundamentos de Programação
	Professor Leonardo Vianna

	Data: 18/05/2022
	
	Recursividade
	
	Multiplicação: calcular a x b a partir de sucessivas somas (ou seja, somar o valor de 'a' 'b' bezes).
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int multiplicacao (int a, int b);

//implementação da função main
void main ()
{
	//declaração de variáveis
	int x = 2, y = 100;
	
	printf ("%d x %d = %d", x, y, multiplicacao (x,y));	
}

//implementações das funções
int multiplicacao (int a, int b)
{
	//caso base
	if (b == 0)
	{
		return 0;
	}
	else
	{
		//caso geral
		return a + multiplicacao (a, b-1);
	}
}
```
---

# Potência recursiva
```c
/*
	FPR - Fundamentos de Programação
	Professor Leonardo Vianna

	Data: 18/05/2022
	
	Recursividade
	
	Potencia: implementações iterativa e recursiva
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int potenciaI (int base, int expoente);
int potenciaR (int base, int expoente);

//implementação da função main
void main ()
{
	//declaração de variáveis
	int x = 2, y = 15;
	
	printf ("versao iterativa: %d^%d = %d\n\n", x, y, potenciaI (x,y));
	
	system ("pause");
	
	printf ("versao recursiva: %d^%d = %d\n\n", x, y, potenciaR (x,y));
}

//implementações das funções
int potenciaI (int base, int expoente)
{
	//declaração de variáveis
	int i, pot = 1;
	
	//gerando iterativamente o valor de 'base' elevado a 'expoente'
	for (i=1;i<=expoente;i++)
	{
		pot *= base;
	}
	
	//retornando o resultado
	return pot;
}

int potenciaR (int base, int expoente)
{
	//caso base
	if (expoente == 0)
	{
		return 1;
	}
	else
	{
		//caso geral
		return base * potenciaR (base, expoente-1);
	}
}
```

---

## Fibonacci recursivo

```c
/*
	FPR - Fundamentos de Programação
	Professor Leonardo Vianna

	Data: 18/05/2022
	
	Recursividade
	
	Calcular o n-ésimo termo da sequência de Fibonacci (versões iterativa e recursiva)
	
					1  1  2  3  5  8  13  21  ...
					a  b  c
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int fibonacciI (int n);
int fibonacciR (int n);

//implementação da função main
void main ()
{
	//declaração de variáveis
	int x = 50;
	
	printf ("Versao iterativa: %do. termo da sequencia => %d\n\n", x, fibonacciI (x));
	
	system ("pause");
	
	printf ("Versao recursiva: %do. termo da sequencia => %d\n\n", x, fibonacciR (x));
}

//implementações das funções
int fibonacciI (int n)
{
	//declaração de variáveis
	int a, b, c, i;
	
	//se n for 1 ou 2, não será feita a soma dos dois anteriores (afinal, não existirão dois elementos anteriores)
	if ((n == 1) || (n == 2))
	{
		return 1;
	}
	else  //ou seja, o n é maior ou igual a 3
	{
		a = 1;
		b = 1;
		
		for (i=3;i<=n;i++)
		{
			//calculando o i-ésimo termo
			c = a + b;
			
			//atualizando os valores de a e b para cada nova iteração
			a = b;
			b = c; 
		}
		
		//retornando o n-ésimo termo
		return c;
	}
}

int fibonacciR (int n)
{
	if ((n == 1) || (n == 2))	//casos bases
	{
		return 1;
	}
	else
	{
		return fibonacciR (n-1) + fibonacciR (n-2);
	}
}
```
