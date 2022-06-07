/*AVF Quest�o 02:
Um programa deve permanecer lendo valores at� que o
n�mero 0 (zero) seja fornecido pelo usu�rio pela terceira
vez. Neste contexto, pede-se a implementa��o:
1. Da fun��o que proceder� com a leitura dos elementos,
os armazenar� em um vetor e retornar� as posi��es
nas quais estar�o armazenadas as 3 ocorr�ncias do
valor 0;
2. Da fun��o que, uma vez preenchido o vetor,
determinar� o maior elemento digitado at� a primeira
ocorr�ncia do n�mero 0;
3. Da fun��o que calcular� a m�dia dos valores
informados entre a primeira e segunda ocorr�ncias do
n�mero 0.
Al�m disso, deve ser implementada a fun��o main
chamando as demais fun��es e exibindo os resultados
retornados, caso existam.
Nota: na main, podem considerar que um vetor com 100
posi��es ser� suficientemente grande para armazenar
todos os valores informados.*/

#include <stdio.h>

//fun��es:
void LerV(float V[],int *p1,int *p2,int *Tam);
void exibir(float V[],int Tam);
float MaiorV(float V[],int P);
float media(float V[],int P1,int P2);

int main()
{
	//constante: definido na quest�o.
	float V[100];
	//variaveis:
	int p1,p2,Tam; //p = posi��o. Tam = Tamanho preenchido.
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
	int i,cont=0; //cont n�o � necessario pode-se obter o mesmo resultado do cont atraves de (P2-(P1+1)) tbm pode-se colocar p1+1 na hr de informar os valores para passar para fun��o.
	float media=0;
	
	for(i=P1+1;i<P2;i++) //caso informado na main o valor do P1 como p1+1 retirar +1 daqui
	{
		media=media+V[i];
		cont++;
	}
	return media/cont;
}
