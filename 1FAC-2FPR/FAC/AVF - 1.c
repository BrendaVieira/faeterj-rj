/* AVF Questão 01:
Desenvolver uma função que, dado um número inteiro
qualquer, determine o total de algarismos que esse valor
possui.
Exemplos:
Número lido: 15954
Resposta: 5 algarismos
Número lido: 211
Resposta: 3 algarismos
Observação: devem ser apresentadas 3 versões da função
solicitada, uma para cada estrutura de repetição
estudada.*/
#include <stdio.h>

//funções 3 versões:
int vFor(int num);
int vWhile(int num);
int vDoWhile(int num);

int main()
{
	int num;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	printf("\nVersão For: %d Algarismos\n",vFor(num));
	printf("Versão While: %d Algarismos\n",vWhile(num));
	printf("Versão Do/While: %d Algarismos\n",vDoWhile(num));
	
}

int vFor(int num) //versão for
{
	int i;
	
	for(i=0;num!=0;i++)
	{
		num=num/10;
	}
	
	return i;
}

int vWhile(int num) //versão while
{
	int i=0;
	
	while(num!=0)
	{
		num=num/10;
		i++;
	}
	
	return i;
}

int vDoWhile(int num) //versão do/while
{
	int i=0;
	
	do
	{
		num=num/10;
		i++;	
	}while(num!=0);
	
	return i;
}

