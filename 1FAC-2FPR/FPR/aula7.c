### Corre��o lista Strings


#### Quest�o 03:
Desenvolver uma fun��o que, dada uma string
s, crie uma substring que inicie na posi��o p de
s e contenha n caracteres.
Observa��es: se p e/ou n forem inv�lidos, a
substring ser� vazia; ii) se s n�o possuir n
caracteres al�m de p, a substring a ser criada
come�ar� em p e terminar� no final de s.

A|L|G|O|R|I|T|M|O|\0

0 1 2 3 4 5 6 7 8 9 

p=3 -> inicio da substring letra O

n=4 -> tamanho

substring = 0RIT\0

p valido: at� o tamanho da string (8, pq \0 � invalido)

n valido: idem, nao pode ser <=0


percorrer string e substring aumentando cada indice(i e j) igualmente.
mas j deve ser menor que o tamanho desejado (n)
e i deve ser menor que o tamanho da string original, pois para no '\0'

```c
#include <stdio.h>
#include <string.h>

//prototipo da fun��o
void substring (char s[], int p, int n, char sub[]);

void main()
{
	//declara��o de variaveis
	char string[30], sub[30];
	
	//inicializando
	strcpy(string, "FUNDAMENTOS DE PROGRAMACAO");
	
	//exemplos de chamada
	//valida
	substring(string, 4, 10, sub);
	printf("chamada 1 - sub: %s\n\n", sub);
	
	//invalida
	substring(string, -4, 8, sub);
	printf("chamada 2 - sub: %s\n\n", sub);
	
	//invalida
	substring(string, 8, 40, sub);
	printf("chamada 3 - sub: %s\n\n", sub);
	
	//valida
	substring(string, 20, 10, sub);
	printf("chamada 4 - sub: %s\n\n", sub);
	
}
void substring (char s[], int p, int n, char sub[])
{
	//declara��o de variaveis
	int i, j, tamanho = strlen(s);
	
	//testando as restri��es se 'p' ou 'n' sao invalidos
	if ((p<0)|| (p>=tamanho)|| (n<=0) || (n>tamanho))
	{
		//retornar substring vazia (duas formas)
		strcpy(sub, ""); //ou sub[0]='\0';
	}
	else
	{
		for (i=p,j=0; (j<n)&&(i<tamanho); i++, j++)
		{
			sub[j]=s[i];
		}
		sub[j]='\0';
	}

}
```
---

#### Questao 4

Implementar uma fun��o que remova todas as
ocorr�ncias de determinado caracter em uma
string.

A|L|G|O|R|I|T|M|O|S|\0

0 1 2 3 4 5 6 7 8 9 10

remover O: substring = ALGRITMS\0

criar aux para receber a nova string copiando cada caractere exclusive o caracter proposto

```c
/*
Questao 4
Implementar uma fun��o que remova todas as
ocorr�ncias de determinado caracter em uma
string.*/
#include <stdio.h>
#include <string.h>

void removerCaracteres(char s[], char ch);

vod main()
{
	//declara��o de variaveis
	char string[30];
	
	strcpy(string, "FUNDAMENTOS DE PROGRAMACAO");
	
	//exemplo de chamada
	
	removerCaracteres(string, 'O');
	printf("String apos a remo��o da letra O: %s", string);

}

void removerCaracteres(char s[], char ch)
{
	//declara��o de variaveis
	char aux[50];
	int i, j = 0;
	
	//copiando para 'aux'todos os caracteres diferentes de 'ch'
	
	for(i=0; i<strlen(s), i++)
	{
		if (s[j] != ch)
		{
			aux[j] = s[i];
			j++;
		}
	}
	
	//finalizando a string 'aux' com '\0'
	aux[j] = '\0';
	
	//copiando 'aux' para 's'
	strcpy(s, aux);
}


```
