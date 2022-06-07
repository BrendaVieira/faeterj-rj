Função strcpy
#include <stdio.h>

void copiarStrings (char S1[], char S2[]);

void main()
{
	char palavra1[20], palavra2[20];
	
	//lendo os valores para as strings
	
	printf("entre com a 1ª palavra: ");
	fflush(stdin);
	gets(palavra1);
	
	printf("entre com a 2ª palavra: ");
	fflush(stdin);
	gets(palavra2);
	
	//exibindo os valores antes de copiar
	printf("palavra1: %s, palavra2: %s\n", palavra1, palavra2);
	
	//chamando a função
	
	copiarStrings(palavra1, palavra2);
	
	//exibindo as strings apos a copia
	
	printf("palavra1: %s, palavra2: %s\n", palavra1, palavra2);
}

void copiarStrings (char S1[], char S2[]){

	int i;
	
	for (i=0; S2[i]!='\0'; i++) //copia toda a string com exeção do \0
		{
			S1[i]=S2[i];
		}
		
	S1[i]='\0';
	 //para nao completar com lixo
}
