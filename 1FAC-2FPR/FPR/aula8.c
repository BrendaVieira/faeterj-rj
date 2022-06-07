Matrizes
Estrutura de Dados Homog�nea
Sintaxe envolve dois loops, um for dentro do outro, j� que se fixa a posi��o da linha e varia a posi��o coluna.
Exemplo:

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
_RESULTADO: _ Matriz 5x5:
0 1 1 1 1

-1 0 1 1 1

-1 -1 0 1 1

-1 -1 -1 0 1

-1 -1 -1 -1 0

Contar quantas vezes aparece tal numero na matriz
#include <sdudio.h>
#define L 10
#define C 20

/*
int numOcorrencias (int m[10][20], int numero)
melhor pr�-definir os tamanhos
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

//essa solu��o l� mais vezes, desnecessariamente: 
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
Construindo Matriz Transposta
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
