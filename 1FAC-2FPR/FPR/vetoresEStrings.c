## Revisão 2

VETORES:
int v[30];

obs.: escrever v = *int (v sempre vai apontar para a primeira posicao)
```c
for (i=1; i<30; i++){
  printf("entre com um numero");
  scanf("%d", &v[i]);
}
```
---
EXEMPLO

```c
#include <stdio.h>

/*EXEMPLO
Dado um vetor de 50 inteiros e um numero x, desenvolver a funcao 
que determine o numero de ocorrencias de x no vetor:*/

int ocorrencias(int v[50], int x){
	
	int i, cont =0;
	
	//percorrendo o vetor
	for(i=0; i<50; i++)
	{
		//verificando se o nº x é encontrado na posição i
		if (v[i]==x)
		{
			cont++;	
		}
	}
	return cont;
}

void main()
{
	int v1[50], valor, quant=0, i;
	
	//preenchendo o vetor
	for (i=0; i<50; i++)
	{
		printf("entre com um numero: ");
		scanf("%d", &v1[i]);
	}
	
	//lendo o valor a ser buscado no vetor
	printf("Entre com o valor a ser buscado: ");
	scanf("%d", &valor);
	
	//chamando a funcao
	quant = ocorrencias(v1, valor);
	
	//exibindo o resultado
	
	printf("Foram encontrados %d ocorrencias do numero %d no vetor", quant, valor);
} 
```

OBS:
-MELHOR FIXAR UM TAMANHO PARA O VETOR E PREENCHER ALEATORIAMENTE, DO QUE MANUALMENTE 1 POSICAO DE CADA VEZ
-NAO FIXAR O TAMANHO NA FUNCAO, PARA NAO CONFLITAR COM OUTRO VETOR

```c
#include <stdio.h>

/*EXEMPLO
Desenvolver a funcao 
que determine o numero de ocorrencias de x nos vetores:*/

int ocorrencias(int v[], int tamanho, int x){
	
	int i, cont =0, tamanho;
	
	//percorrendo o vetor
	for(i=0; i<tamanho; i++)
	{
		//verificando se o nº x é encontrado na posição i
		if (v[i]==x)
		{
			cont++;	
		}
	}
	return cont;
}

void main()
{
	int v1[TAM1], v2[TAM2], valor, quant=0, i;
	
	//preenchendo o vetor1
	for (i=0; i<TAM1; i++)
	{
		printf("entre com um numero: ");
		scanf("%d", &v1[i]);
	}
	
  	//preenchendo o vetor2
	for (i=0; i<TAM2; i++)
	{
		printf("entre com um numero: ");
		scanf("%d", &v1[i]);
	}
  
	//lendo o valor a ser buscado no vetor
	printf("Entre com o valor a ser buscado: ");
	scanf("%d", &valor);
	
	//chamando a funcao
	quant = ocorrencias(v1, TAM1, valor);
	
	//exibindo o resultado
	
	printf("Foram encontrados %d ocorrencias do numero %d no vetor", quant, valor);
}
```

## **STRINGS**
coleção de caracteres = vetor de char

char nome[30];

nome J|O|A|O|\0|_|_|_|_|..._|
\0 é colocado automaticamente pelo complidaor para identificar o fim da string

-----------------APLICAR NA FUNCAO ACIMA, AGORA TRATANDO CARACTERES
```c
#include <stdio.h>
#define TAM1 10
#define TAM2 5
/*EXEMPLO
Dado um vetor de 50 inteiros e um numero x, desenvolver a funcao 
que determine o numero de ocorrencias de x no vetor:*/

/*Desenvolver a funcao 
que determine o numero de ocorrencias de x nos vetores:*/
// contruindo vetor de tamanho generico
int ocorrencias(char S[], char letra){
	
	int i, cont=0;
	
	//percorrendo o vetor
	for(i=0; S[i]!= '\0'; i++)
	{
		//verificando se o nº x é encontrado na posição i
		if (S[i]=letra)
		{
			cont++;	
		}
	}
	return cont;
}

void main()
{
	int v1[TAM1], v2[TAM2], valor, quant=0, i;
	
	//preenchendo o vetor1
	for (i=0; i<TAM1; i++)
	{
		printf("entre com um numero: ");
		scanf("%d", &v1[i]);
	}
	
  	//preenchendo o vetor2
	for (i=0; i<TAM2; i++)
	{
		printf("entre com um numero: ");
		scanf("%d", &v1[i]);
	}
  
	//lendo o valor a ser buscado no vetor
	printf("Entre com o valor a ser buscado: ");
	scanf("%d", &valor);
	
	//chamando a funcao
	quant = ocorrencias(v1, TAM1, valor);
	
	//exibindo o resultado
	
	printf("Foram encontrados %d ocorrencias do numero %d no vetor", quant, valor);
}

```
