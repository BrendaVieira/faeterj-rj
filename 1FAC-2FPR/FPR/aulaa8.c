QUESTAO 3
funcao para gerar tal matriz

1	2	3	4	5

2	3	4	5	6

3	4	5	6	7

4	5	6	7	8

5	6	7	8	9

```c
#include <sdudio.h>
#define L 8
#define C L //matriz quadrada

void gerarMatriz (int m[L][C])
{
	int i, j;
	
	for (i=0; i<L; i++)
	{
		for (j=0; j<C; j++)
		{
			mt[j][i]=i+j+1;
		}
	}
}

//OU

void gerarMatriz (int m[L][C])
{
	int i, j;
	
	for (i=0; i<L; i++)
	{
		k=i++; //constante começa com valor =1 e vai aumentando a cada linha
		for (j=0; j<C; j++)
		{
			m[i][j]=k;
			k++;
		}
	}
}
```
