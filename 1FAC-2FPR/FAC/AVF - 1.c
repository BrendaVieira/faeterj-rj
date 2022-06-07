/* AVF Quest�o 01:
Desenvolver uma fun��o que, dado um n�mero inteiro
qualquer, determine o total de algarismos que esse valor
possui.
Exemplos:
N�mero lido: 15954
Resposta: 5 algarismos
N�mero lido: 211
Resposta: 3 algarismos
Observa��o: devem ser apresentadas 3 vers�es da fun��o
solicitada, uma para cada estrutura de repeti��o
estudada.*/
#include <stdio.h>

//fun��es 3 vers�es:
int vFor(int num);
int vWhile(int num);
int vDoWhile(int num);

int main()
{
	int num;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	printf("\nVers�o For: %d Algarismos\n",vFor(num));
	printf("Vers�o While: %d Algarismos\n",vWhile(num));
	printf("Vers�o Do/While: %d Algarismos\n",vDoWhile(num));
	
}

int vFor(int num) //vers�o for
{
	int i;
	
	for(i=0;num!=0;i++)
	{
		num=num/10;
	}
	
	return i;
}

int vWhile(int num) //vers�o while
{
	int i=0;
	
	while(num!=0)
	{
		num=num/10;
		i++;
	}
	
	return i;
}

int vDoWhile(int num) //vers�o do/while
{
	int i=0;
	
	do
	{
		num=num/10;
		i++;	
	}while(num!=0);
	
	return i;
}

