/*Atividade 9
Desenvolver uma fun��o que, dado um vetor de inteiros com quant elementos, ordene-os crescentemente.

Observa��o:
� obrigat�rio que esta fun��o chame aquela desenvolvida na atividade 8, quantas vezes forem necess�rias para se chegar ao objetivo pretendido.
*/

#include <stdio.h>

#define TAM 7

void Exibir(int vet[]);
void Trocar(int vet[],int p);
void Ordenar(int vet[]);

int main()
{
   int vet[TAM];
   int i, p;
   
   printf("Digite os valores:\n");
    for(i=0;i<TAM;i++)
    {
        scanf("%d", &vet[i]);
    }

   printf("\nDigite a posicao de troca: ");
   scanf("%d",&p);
   
   Trocar(vet,p-1);
   Ordenar(vet);

}

void Trocar(int vet[],int p)
{
    int i=p,temp,menor=vet[i];


    while(i<TAM)
    {
        if(menor>=vet[i])
        {
            menor=vet[i];
            temp=i;
        }
        i++;
    }

    vet[temp]=vet[p];
    vet[p]=menor;
}

void Exibir(int vet[])
{
    int i;

    for(i=0;i<TAM;i++)
    {
        printf("\t%d",vet[i]);
    }
}

void Ordenar(int vet[])
{
    int i;

    for(i=0;i<TAM;i++)
    {	
        printf("\nVetor %d alterado: ", i); //alterando at� estar em ordem crescente
        Exibir(vet);
        Trocar(vet,i);
   }
}
