#include <stdio.h>

/*Atividade 3 - AV1
Desenvolver um programa que, dado um n�mero inteiro N, determine a quantidade de
combina��es poss�veis (e exiba-as) com tr�s n�meros (distintos entre si), com
valores no intervalo de 1 a N.*/

int main()
{
	int i, j, k, n;
	
	printf("Entre com um numero inteiro positivo nao nulo\n");
	scanf("%d", &n);
	
	if (n>0)
	
	for(i=1; i<=n; i++)
	    for(k=1; k<=n; k++)	
			for(j=1; j<=n; j++)	

	if(i!=j && j!=k && i!=k) 
	printf("%d %d %d\n", i, k, j);
}
