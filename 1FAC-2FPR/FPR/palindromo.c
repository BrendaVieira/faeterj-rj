/*questao 2 - dado uma string s, 
desenvolver uma funcao que determine
se � pal�ndromo ou nao.
*/
#include <stdio.h>

int definePalindromo (char S[]);
int quantCaracteres (char S[]);

void main()
{
	//Declra��o de variaveis
	char palavra[20];
	
	//Entrda da string
	printf("Entre com uma palavra: ");
	fflush(stdin);
	gets(palavra);
	
	//Chamada da fun��o
	definePalindromo (palavra);
}

//Fun��o pal�ndromo
int definePalindromo (char S[])
{
	//Declara��o de variaveis
	int i, j, quant;
	
	//Atribuir a quantidade de caracteres da string chamando tal fun��o
	quant = quantCaracteres (S);
	
	//Percorrendo a string e comparando os caracteres
	for(i=0; S[i]!='\0'; i++)
	{
		for(j=quant; S[j-1]; j++)
		{
			if(S[i]==S[j])
			{
				printf("a string eh um palindromo");
			}
			else
				{
					printf("a string nao eh um palindromo");
				}
		}
	}
	
}

//Fun��o que quantifica os caracteres da string
 int quantCaracteres (char S[])
  {
    //Declara��o de variaveis
    int i;
    
    //Percorrendo a string e contando
    for(i=0; S[i]!='\0'; i++);

    return i;
  }
GABARITO
int palindromo(char)
{
	int i, j;
	
	/*uso de strlen para come�ar a compara��o com os caracteres do final
	a aprtir da quantidade de caracteres da string*/
	
	for(i=0, j=strlen(S)-1; i<j; i++, j--)
	{
		if (S[i]!=S[j])
		{
			return 0;
		}
	}
	return 1;
}
