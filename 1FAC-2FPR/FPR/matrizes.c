# Matrizes

* Estrutura de Dados Homogênea
* Sintaxe envolve dois loops, um for dentro do outro, já que se fixa a posição da linha e varia a posição coluna.

Exemplo:

```c
/*
MATRIZ
*/
#include <stdio.h>

void main()
{
	//definindo tamanho da matriz(linha e coluna)
	int i, j;
	int m1[5][5];
	
	printf("Matriz 5x5: \n");
	for (i=0; i<5 ;i++)
	{
		for(j=0; j<5; j++)
		{
			if(i==j)
			{
				m1[i][j]=0;
			
			}
			else
			{
				if(i<j)
				{
					m1[i][j]=1;
				
				}
				else
				{
					if(i>j)
					{
						m1[i][j]=-1;
					}
				}	
			}
			printf("%d	", m1[i][j]);
		}
		printf("\n"); //assim que completa a linha, pula pra proxima (i) 
	}
	
}
```
* _RESULTADO: _
Matriz 5x5:

0       1       1       1       1

-1      0       1       1       1

-1      -1      0       1       1

-1      -1      -1      0       1

-1      -1      -1      -1      0


## Contar quantas vezes aparece tal numero na matriz

```c
#include <sdudio.h>
#define L 10
#define C 20

/*
int numOcorrencias (int m[10][20], int numero)
melhor pré-definir os tamanhos
*/

int numOcorrencias (int m[L][C], int numero)
{
	int i, j, cont=0;
	
	for (i=0; i<L; i++)
	{
		for (j=0; j<C; j++)
		{
			if (m[i][j]==numero)
			{
				cont++;
			}
		}
	}
	return cont;
}

/* encontrar numero em uma linha*/

//essa solução lê mais vezes, desnecessariamente: 
int numOcorrencias (int m[L][C], int numero, int linha)
{
	int i, j, cont=0;
	
	for (i=0; i<L; i++)
	{
		for (j=0; j<C; j++)
		{
			if (i==linha)
			{
				if (m[i][j]==numero)
				{
					cont++;
				}
			}
		}
	}
	return cont;
}

// melhorando o de cima: 

int numOcorrencias (int m[L][C], int numero, int linha)
{
	int j, cont=0;
	
	for (j=0; j<C; j++)
	{
		if (m[linha][j]==numero)
		{
			cont++;
		}
	}
	return cont;
}
```
## Construindo Matriz Transposta

```c
#include <sdudio.h>
#define L 8
#define C 5

void transposta (int m[L][C], int mt[C][L])
{
	//varrendo a primeira matriz
	int i, j;
	
	for (i=0; i<L; i++)
	{
		for (j=0; j<C; j++)
		{
			mt[j][i]==m[i][j];
		}
	}
}

//OU

void transposta (int m[L][C], int mt[C][L])
{
	int i, j;
	
	for (i=0; i<L; i++)
	{
		for (j=0; j<C; j++)
		{
			mt[i][j]=m[j][i];
		}
	}
}

```
