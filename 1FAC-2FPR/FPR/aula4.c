Strings: Fun��es de manipula��o (algemas da string.h)
strlen (string lenght)
Dada uma string retorna a sua quantidade de caracteres (sem considerar o '\0')
  for (i=0; S[i]!='\0'; i++)
  {
  }
    // pode ser ecrito:
    for (i=0; i<strlen(S); i++)
    {
    }
      // porem executa fun��o sempre (perda de tempo)
      //melhorando:
      tam = strlen(S);
      for (i=0; i<tam; i++)
      {
      }
strcpy (string copy)
Copia uma string para outra (caracteres para o endere�o de destino)
strcpy (S1,S2);
  // S1 recebe S2
strcat (string concat)
Concatenar duas strings
strcat (S1,S2);
//S1 concatena com S2 (se completa at� o tamanho de S1)
//guarda o resultado em S1
strcmp (string compare)
obs: if (S1==S2); // � errado pq compara o endere�o. Pede compara��o dos caracteres
strcmp (S1,S2); 
Pode retornar 3 valores:
= 0 -> S1 e S2 s�o iguais
< 0 -> Se S1 � alfabeticamente anterior a S2
joao
maria
retorna < 0
> 0 -> Se S2 � alfabeticamente anterior a S1
teste
tesoura
retorna > 0 Na realidade compara a distancia de um caractere a outro
//supondo que nao exista a funcao copiar, implemente-a

#include <stdio.h>

void copiarStrings (char S1[], char S2[]);

void main()
{
   char palavra1[20], palavra2[20];
   
   //lendo os valores para as strings
   
   printf("entre com a 1� palavra: ");
   fflush(stdin);
   gets(palavra1);
   
   printf("entre com a 2� palavra: ");
   fflush(stdin);
   gets(palavra2);
   
   //exibindo os valores antes de copiar
   printf("palavra1: %s, palavra2: %s\n", palavra1, palavra2);
   
   //chamando a fun��o
   
   copiarStrings(palavra1, palavra2);
   
   //exibindo as strings apos a copia
   
   printf("palavra1: %s, palavra2: %s\n", palavra1, palavra2);
}

void copiarStrings (char S1[], char S2[]){

   int i;
   
   for (i=0; S2[i]!='\0'; i++) //copia toda a string com exe��o do \0
   	{
   		S1[i]=S2[i];
   	}
   	
   S1[i]='\0';
    //para nao completar com lixo
}
S1: C|A|R|R|O 0 1 2 3 4 S2: M|O|T|O 0

l�, passa pra fun��o

fun��o: -conta o tamanho de ambas -percorre s1 -> percorre s2 -atribue a s1[i] valores de s2[i]
