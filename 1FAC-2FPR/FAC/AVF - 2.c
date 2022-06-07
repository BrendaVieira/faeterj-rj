/*AVF Questão 02:
Um programa deve permanecer lendo valores até que o
número 0 (zero) seja fornecido pelo usuário pela terceira
vez. Neste contexto, pede-se a implementação:
1. Da função que procederá com a leitura dos elementos,
os armazenará em um vetor e retornará as posições
nas quais estarão armazenadas as 3 ocorrências do
valor 0;
2. Da função que, uma vez preenchido o vetor,
determinará o maior elemento digitado até a primeira
ocorrência do número 0;
3. Da função que calculará a média dos valores
informados entre a primeira e segunda ocorrências do
número 0.
Além disso, deve ser implementada a função main
chamando as demais funções e exibindo os resultados
retornados, caso existam.
Nota: na main, podem considerar que um vetor com 100
posições será suficientemente grande para armazenar
todos os valores informados.*/

#include <stdio.h>

//funções:
void LerV(float V[],int *p1,int *p2,int *Tam);
void exibir(float V[],int Tam);
float MaiorV(float V[],int P);
float media(float V[],int P1,int P2);

int main()
{
	//constante: definido na questão.
	float V[100];
	//variaveis:
	int p1,p2,Tam; //p = posição. Tam = Tamanho preenchido.
	LerV(V,&p1,&p2,&Tam);
	printf("Vetor Prenchido:");
	exibir(V,Tam);
	printf("a primeira ocorrencia do 0 foi na posicao: %d\n",p1);
	printf("a segunda ocorrencia do 0 foi na posicao: %d\n",p2);
	printf("o maior valor na primeira ocorrencia do 0: %.1f\n",MaiorV(V,p1));
	printf("a Media dos valores entre a primeira ocorrencia e a segunda: %.1f\n",media(V,p1,p2));
	
}

void LerV(float V[],int *p1,int *p2,int *Tam)
{
	int i,cont=0;
	for(i=0;i<100 && cont!=3;i++)
	{
		printf("Digite %do Valor do Vetor: ",i+1);
		scanf("%f",&V[i]);
		
		if(V[i]==0)
		{
			cont++;
			if(cont==1)
			{
				*p1=i;
			}
			else
			{
				if(cont==2)
				{
					*p2=i;
				}
			}
		}
	}
	*Tam=i;
	printf("\n\n");
}
void exibir(float V[],int Tam)
{
	int i;
	
	for(i=0;i<Tam;i++)
	{
		printf("\t%.1f",V[i]);
	}
	printf("\n\n");
}
float MaiorV(float V[],int P)
{
	int i;
	float maiorV=0;
	
	for(i=0;i<P;i++)
	{
		if(maiorV<V[i])
		{
			maiorV=V[i];
		}
	}
	return maiorV;
}
float media(float V[],int P1,int P2)
{
	int i,cont=0; //cont não é necessario pode-se obter o mesmo resultado do cont atraves de (P2-(P1+1)) tbm pode-se colocar p1+1 na hr de informar os valores para passar para função.
	float media=0;
	
	for(i=P1+1;i<P2;i++) //caso informado na main o valor do P1 como p1+1 retirar +1 daqui
	{
		media=media+V[i];
		cont++;
	}
	return media/cont;
}
