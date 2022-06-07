Revisando strcmp
Compara os caracteres da string de acordo com a numeração da tabela ASCII
 strcmp ("Anderson","Maria"); <0 //s1 alfabeticamente menor que s2

 strcmp ("Teste","Tesoura"); >0 //s2 alfabeticamente menor que s1

 strcmp ("FPR","FPR"); =0 //s1 alfabeticamente igual a s2
 
 strcmp ("CASAMENTO","CASA"); //nesse caso compara o 'm' com o \0, entao >0, s2 alfabeticamente menor que s1
printf("%c, caracter); exibe o caracter

printf("%d, caracter);exibe o valor do caracter na tabela ASCII

laço exibe os valores e os caracteres da Tabela ASCII
for(i=0; i<256; i++)
{
 printf("%d: %c\n", i, i);
}
Implementando a função na marra
#include <stdio.h>

//funcao compara as funcoes
int comparaString(char S1[], char S2[])
{
	i=0;
	
	//percorrer as strings para encontrar a diferença e compara-las
	while((S1[i]!='\0') && (S2[i]!='\0') && (S1[i]==S2[i]))
	{
		i++;
	}
	if((S1[i])=='\0') && (S2[i]!='\0'))
	{
		return 0;
	}
	else
	{
		if(S1[i]>S2[i])
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
}
MELHORAR O CODIGO SUBSTITUINDO OS IFS E ELSES
#include <stdio.h>

//funcao compara as strings
int comparaString(char S1[], char S2[])
{
	int i;
	i=0;
	
	//percorrer as strings para encontrar a diferença e compara-las
	while((S1[i]!='\0') && (S2[i]!='\0') && (S1[i]==S2[i]))
	{
		i++;
	}
	 return S1[i]-S2[i]; // vai retornar o resultado da operação entre os valores dos caracteres definitivos comparados 
}
RESUMINDO AINDA MAIS
//funcao compara as strings
int comparaString(char S1[], char S2[])
{
	int i;
	
	//percorrer as strings para encontrar a diferença e compara-las
	
	for(i=0; (S1[i]!='\0') && (S2[i]!='\0') && (S1[i]==S2[i]); i++)
	{
		 return S1[i]-S2[i]; /*vai retornar o resultado da operação entre 
		 os valores dos caracteres definitivos comparados  */ 
	}

}

