FAC - REVISÃO
Funções - PARAMETRO POR VALOR
#include <stdio.h>
void funcao (int x, float y)
{
	int z = 5;
	x = x+z;
	y=(y-x)/2;
}

void main()
{
	int a = 10;
	float b = 5.7;
	
	
	//exibindo os valores antes da funcao
	printf("a=%d e b=%.1f\n", a,b);
	
	//chamando a funcao
	funcao (a,b);
	
	//exibindo os valores apos a funcao
	printf("a=%d e b=%.1f\n", a,b);
}
RESULTADO: a = 10, b=5.7; a = 10, b=5.7; -> é necessário a aplicação de ponteiro/return na funcao porque a memoria alocada para cada valor esta sendo alterada apenas na funcao, sendo que esses valores precisam ser alteradosna main MODIFICAR

PARAMETRO POR REFERENCIA/PONTEIRO - passa-se o endereço de memoria do valor
#include <stdio.h>
void funcao (int *x, float *y) //ponteiro para inteiro->armazena um endereço de memoria. no final encontra-se um inteiro
{
	int z = 5;
	*x = *x + z;
	*y=(*y-(*x))/2;
}

void main()
{
	int a = 10;
	float b = 5.7;
	
	
	//exibindo os valores antes da funcao
	printf("a=%d e b=%.1f\n", a,b);
	
	//chamando a funcao
	funcao (&a, &b); //identifica a passagem desse valor para ponteiro de inteiro e o endereço de recebimento desse valor
	
	//exibindo os valores apos a funcao
	printf("a=%d e b=%.1f\n", a,b);
}
RESULTADO: a = 10, b = 5.7; a = 15, b = -4.7;

RETORNO e VETOR

vetor: variavel que armazena varios valores ao mesmo tempo float notas[30];

matriz: conjunto de vetores

estrutura de dados homogenea (guarda varios valores mas do mesmo tipo)
int matriz[4][5];

obs.: Matriz heterogenea = STRUCT
