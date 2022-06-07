/* Atividade 10
Fazer um função
que, dados dois vetores A e B com números inteiros, gerar o vetor C que consiste na união dos dois
primeiros.

Nota: considerar que não existe repetição no conjunto A, nem no conjunto B. Da mesma forma, não existirão repetições em C.*/

#include<stdio.h>

void Exibir(int vet[], int quantidade);
int Buscar(int num, int v[], int quant);
void Unir(int A[], int quantA[], int B[], int quantB[], int C[], int *quantC[]);

void main()
{
	
	int quant, vet1[5] = {4,10,1,9,8}, vet2[9] = {6,1,3,0,2,5,8,4,7}, vetU[14];
		
	uniao(vet1, 5, vet2, 9, vetU, &quant);
	
	printf("Vetor 1: ");
	//Exibir(vetor, quant);
	Exibir(vet1, 5);
		
	printf("Vetor 2: ");
	Exibir(vet2, 9);
	
	printf("Uniao: ");
	Exibir(vetU, quant);
}

int Buscar(int num, int v[], int quant)
{
	int i;
	
	for(i=0;i<quant;i++) //comparison between pointer and integer ??????
	{
		if(v[i] == num)
		{
			return i;
		}
		/*else
		{
			return -1;
		}
	}*/
	return -1;
}

void Unir(int A[], int quantA[], int B[], int quantB[], int C[], int quantC[])
{
	int i, j;
	
	for(i=0;i<quantA;i++)
	{
		C[i] = A[i];
	}
	
	for(j=0;j<quantB;j++)
	{
		if (Buscar(B[j], A, quantA) == -1)
		{
			C[i] = B[j];
			i++;
		}
	}
	*quantC = i;
}

int Exibir(int vet[], int tamanho)
{
	int i;
	
	for(i=0;i<tamanho;i++)
	{
		printf("%d ", vet[i]);
	}	
}
}

