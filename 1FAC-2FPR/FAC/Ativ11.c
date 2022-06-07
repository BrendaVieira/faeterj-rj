#include <stdio.h>

/* Atividade 11
Considere um vetor vet1
contendo números inteiros positivos (garante-se
que não há valores negativos, nem o número zero em vet1).

Pede-se o desenvolvimento de uma função que, dado o vetor vet1, gere um novo vetor – vet2 ­– contendo os elementos de vet1, porém ordenados crescentemente e
sem repetição. 

Notas:

i.     A solução pode ser apresentada em uma única função ou pode ser desmembrada em
mais de uma função, de maneira que a principal chame as auxiliares (direta ou
indiretamente);*/

//funções:
void exibir(int V[],int Tam);
void inserir(int V[],int Tam);
void criaVet(int V[],int Tam);
void retiralixo(int V[],int Tam);
int Validade(int V[],int Tam,int num);

//main
#include <stdio.h>

int main()
{
	int Tam=15;
    int Vet1[Tam];
	retiralixo(Vet1,Tam);
    inserir(Vet1,Tam);
    printf("Vetor Vet1: ");
    exibir(Vet1,Tam);
    criaVet(Vet1,Tam);
}
void criaVet(int V[],int Tam)
{
	int x,y,aux,cont=0;
	int Vet2[Tam];
	retiralixo(Vet2,Tam);
	
	for(x=0;x<Tam;x++) //criando o vetor sem repetição
	{
		if(Validade(Vet2,Tam,V[x])==0)
		{
			Vet2[cont]=V[x];
			cont++;
		}
	}
	
	for(int x=0; x<cont; x++) //ordenando o novo vetor em ordem crescente
	{
        for(int y=x; y<cont; y++)
		{
            if(Vet2[x]>Vet2[y]) // 1 2 3 1 2 3 1 2 3 4 5 6 | 1 2 3 4 5 6
			{
                aux=Vet2[x]; 
                Vet2[x]=Vet2[y];
                Vet2[y]=aux;
            }
        }
    }
    printf("Vetor Vet2: ");
	exibir(Vet2,cont);
}
void exibir(int V[],int Tam)
{
	int i;
	
	for(i=0;i<Tam;i++)
	{
		printf("%d ",V[i]);
	}
	printf("\n\n");
}
void inserir(int V[],int Tam)
{
	int i,aux;
	
	for(i=0;i<Tam;i++)
	{
		printf("Inserir %do do Vetor: ",i+1);
	   	scanf("%d",&V[i]);
	    	
	}
}
int Validade(int V[],int Tam,int num)
{
	int i;
	
	for(i=0;i<Tam;i++)
	{
		if(V[i]==num)
		{
			return 1;
		}
	}
	return 0;
}
void retiralixo(int V[],int Tam)
{
	int i;
	
	for(i=0;i<Tam;i++)
	{
		V[i]=0;
	}
}
