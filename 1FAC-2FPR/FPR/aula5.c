Função concatenar
A|Z|U|L|\0|||||_|

1 2 3 4 5 6 7 8 9 10

V|E|R|D|E|\0|||||

1 2 3 4 5 6 7 8 9 10

#include <stdio.h>

void concatenarStrings (char S1[], char S2[]);
int quantCaracteres (char S1[]);

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
	
	concatenarStrings(palavra1, palavra2);
	
	//exibindo as strings apos a copia
	
	printf("palavra1: %s, palavra2: %s\n", palavra1, palavra2);
}

void concatenarStrings (char S1[], char S2[]){

	int i,j;
	i = quantCaracteres(S1);
	/*ja informa onde a primeira palavra termina,
	e por consequencia, 
	onde a segunda palavra vai entrar
	*/
	
	for (j=0; S2[j]!='\0'; j++)
	{
		S1[i]=S2[j];
		i++;
	}
	
	S1[i]='\0';
		
	 //para nao completar com lixo
}

 int quantCaracteres (char S1[])
  {
    //Declaração de variaveis
    int i;
    
    //percorrendo a string e contando
    for(i=0; S1[i]!='\0'; i++);

    return i;
  }
  
  //este bloco pode ser substituído pela função strlen();
Substituindo pela função strlen();
#include <stdio.h>

void concatenarStrings (char S1[], char S2[]);

void main()
{
	char palavra1[20], palavra2[20];
	
	//lendo os valores para as strings
	
	printf("entre com a 1a palavra: ");
	fflush(stdin);
	gets(palavra1);
	
	printf("entre com a 2a palavra: ");
	fflush(stdin);
	gets(palavra2);
	
	//exibindo os valores antes de copiar
	printf("palavra1: %s, palavra2: %s\n", palavra1, palavra2);
	
	//chamando a função
	
	concatenarStrings(palavra1, palavra2);
	
	//exibindo as strings apos a copia
	
	printf("palavra1: %s, palavra2: %s\n", palavra1, palavra2);
}

void concatenarStrings (char S1[], char S2[]){

	int i, j;
	
	i = strlen(S1);
	/*ja informa onde a primeira palavra termina,
	e por consequencia, 
	onde a segunda palavra vai entrar
	*/
	
	for (j=0; S2[j]!='\0'; j++)
	{
		S1[i]=S2[j]; //S1[i] inicial = '\0'
		i++;
	}
	
	S1[i]='\0';
		
	 //para nao completar com lixo
}


