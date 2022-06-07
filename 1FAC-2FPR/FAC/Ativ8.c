/* Atividade 8

Implementar uma função com a seguinte assinatura:

void funcao1 (int vetor[], int quant, int p); onde p é uma posição qualquer do vetor.

Objetivo da função: armazenar na posição p o menor elemento existente no vetor de p à última posição. Para isso, o elemento que estava originalmente na posição p deverá ser armazenado onde estava o menor elemento encontrado.

Exemplo:

vetor:   4   2   8   3   1   9   5                    e                     p = 2

==> O menor elemento da posição 2 em diante é o valor 1. Portanto, os elementos 8 e 1 serão trocados, de forma que o menor (1) fique na posição 2, conforme a seguir:

vetor:   4   2   1   3   8   9   5*/

#include <stdio.h>

#define TAM 7

void Exibir(int vet[]);
void Trocar(int vet[], int p);

int main()
{
   int vet[TAM];	//={4,2,8,3,1,9,5};
   int i, p;
	
	printf("Digite os valores:\n");
    for(i=0;i<TAM;i++)
    {
        scanf("%d", &vet[i]);
    }

   printf("\nDigite a posicao de troca: ");
   scanf("%d",&p);
   
   printf("\nVetor: ");
   Exibir(vet);
   Trocar(vet,p-1);

   printf("\nVetor alterado: ");
   Exibir(vet);
}

void Trocar(int vet[],int p)
{
    int i=0, aux, menor=vet[p];


    while(i<TAM)
    {
        if(menor>=vet[i])
        {
            menor=vet[i];
            aux=i;
        }
        i++;
    }

    vet[aux]=vet[p];
    vet[p]=menor;
}

void Exibir(int vet[])
{
    int i;

    for(i=0;i<TAM;i++)
    {
        printf("%d ",vet[i]);
    }
}
