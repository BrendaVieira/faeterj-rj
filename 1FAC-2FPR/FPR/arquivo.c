## EXEMPLO 1 

Tipos de abertura de arquivo:

w = write (escrita)

r = read (leitura)

a = append (preenchimento sem substituir)


```c
/*Programa para escrever arquivo
Escrever os numeros de 1 a N em um arquivo, um valor por linha
*/

#include <stdio.h>
void main()
{
	FILE *arq; // 1) Declarar a variavel do tipo FILE* 

	int i, n;

	char nomeArq[30];
	printf("Entre com o valor de N: ");
	scanf("%d", &n);
	
	printf ("Entre com o nome do arquivo: ");
	fflush (stdin); //limpa buffer do teclado
	gets(nomeArq);
	
	arq = fopen (nomeArq, "w"); // 2) Abrir o arquivo para escrita
	
	if (arq!=NULL)
	{
		for (i=1; i<=n; i++)
		{
			fprintf(arq, "%d\n", i); // 3) Manipular o arquivo
		}
		fclose(arq); // Fechar o arquivo
	}
	else
	{
		printf("Erro na abertura do arquivo.");
	}
	
}

```

---

## EXEMPLO 2 FUNCAO
```c
//agora fazer um função que escreve arquivo de 1 a N
//para declarar o arquivo -> nome do arquivo e nao FILE
#include <stdio.h>
#define TRUE 1
#define FALSE 0

int escreverArquivo (char nomeArq[], int n);

void main()
{
	int numero;
	char nomeArq[30];
	
	//lendo valor de N
	printf("Entre com um numero: ");
	scanf("%d", &n);
	
	//lendo o nome do arquivo a ser gerado
	printf("Entre com o nome do arquivo: "); // teste.txt cria o arquivo txt, salvando na pasta
	fflush(stdin);
	gets(nomeArq);
	
	//chamando a funcao e verificando se houve sucesso
	if(escreverArquivo (nomeArq, n)==1)
	{
		printf("\nArquivo gerado com sucesso!");
	}else
	{
		printf("\nErro na abertura do arquivo!");
	}
}

int escreverArquivo (char nomeArq[], int n)
{
	FILE *arq;
	int i;
	
	//abrir o arquivo para escrita
	arq = fopen(nomeArq, "w");
	
	//verificando se houve sucesso na abertura do arquivo
	if (arq==NULL) //se o arquivo não contem nada OU if (!arq)
	{
		return 0;
	}
	else
	{
		//variando os numeros de 1 a N
		for(i=1; i<=n; i++)
		{
			fprintf(arq, "%d\n", i);
		}
		fclose(arq);
		return 1;
	}
	
}
```
---

## EXEMPLO 3 FUNCAO COM APPEND
```c
	Exemplo 3: igual ao exemplo 2, porém abrindo o arquivo com "a" (append) ao invés de "w" (write)
*/

//importação de bibliotecas
#include<stdio.h>

//definição de constantes
#define TRUE 1
#define FALSE 0

//protótipos das funções
int escreverArquivo (char nomeArq[], int n);

//main
void main()
{
	//declaração de variáveis
	int n;
	char nomeArq[30];
		
	//lendo o valor de N
	printf ("Entre com o valor de N: ");
	scanf ("%d", &n);
	
	//lendo o nome do arquivo a ser gerado	
	printf ("Entre com o nome do arquivo a ser gerado: ");
	fflush (stdin);
	gets (nomeArq);
	
	//chamando a função	e verificando se houve sucesso
	if (escreverArquivo (nomeArq, n) == TRUE)
	{
		printf ("\nArquivo gerado com sucesso!");
	}
	else
	{
		printf ("\nErro na abertura do arquivo!");
	}
}

//implementação das funções
int escreverArquivo (char nomeArq[], int n)
{
	//decvlaração de variáveis
	FILE *arq;
	int i;
	
	//tentativa de abrir o arquivo para append
	arq = fopen (nomeArq, "a");
	
	//verificando se houve erro na abertura do arquivo	
	if (arq == NULL)  //ou apenas:  if (!arq)
	{
		return FALSE;
	}
	else
	{
		//variando os números de 1 a N
		for (i=1; i<=n; i++)
		{
			//escrevendo cada 'i' no arquivo
			fprintf (arq, "%d\n", i);
		}
		
		fclose (arq);
		
		return TRUE;
	}
}
```
---

## EXEMPLO 4

Dado um arquivo, contendo numeros inteiros, um por linha, desenvolver uma funcao que leia os seus elementos e os exiba na tela

```c
#include <stdio.h>
#define TRUE 1
#define FALSE 0

int leituraArquivo (char nomeArq[])
{
	FILE *arq;
	
	arq = fopen(nomeArq, "r");
	
	if (arq==NULL)
	{
		return 0;
	}
	else
	{
		while(fscanf(arq, "%d", &numero)!=EOF)//enquanto arquivo consegue ler os elementos e nao chega ao fim dele
		{
			printf("%d\n", numero);
		}
		fclose(arq);
		return 1;
	}
}
```

## EXEMPLO 5
Ler o conteudo de um arquivo e exibi-lo na tela, 
independente do tipo de informação que armazena.
```c
	(neste caso, consideraremos que o arquivo é constituído por diversos caracteres)
*/

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TRUE 1
#define FALSE 0

//protótipos das funções
int leituraArquivo (char nomeArq[]);

//main
void main()
{
	//declaração de variáveis
	char nomeArquivo[30];
	
	//lendo o nome do arquivo cujos dados serão lidos
	printf ("Entre com o nome do arquivo: ");
	fflush (stdin);
	gets (nomeArquivo);
	
	//chamando a função
	if (leituraArquivo (nomeArquivo) == TRUE)
	{
		printf("Arquivo lido com sucesso!");
	}
	else
	{
		printf("Erro na abertura do arquivo!");
	}
}

//implementação das funções
int leituraArquivo (char nomeArq[])
{
	//declaração de variáveis
	FILE *arq;
	char caracter;
	
	//tentativa de abrir o arquivo para leitura
	arq = fopen (nomeArq, "r");
	
	//verificando se houve erro na abertura do arquivo	
	if (arq == NULL)
	{
		return FALSE;
	}
	else
	{
		//lendo os caracteres do arquivo até se chegar ao seu final
		while (fscanf (arq, "%c", &caracter) != EOF)
		{
			//exibindo na tela os caracteres lidos
			printf("%c", caracter);
		}
		
		//fechando o arquivo
		fclose(arq);
		
		return TRUE;
	}
}
```

## EXEMPLO 6
Copiar conteudo de um arquivo para outro.

cria dois arquivos, origem e destino.

abre os dois, um pra leitura 'r' e outro pra escrita 'w'.

testar se os arquivos estao vazios / se houve ero na abertura.

* testa o proprio arquivo e copia para o novo.

```c

//importação de bibliotecas
#include <stdio.h>

//definição de constantes
#define TRUE 1
#define FALSE 0

//protótipos das funções
int copiarArquivo (char arqO[], char arqD[]);

//main
void main()
{
	//declaração de variáveis
	char nomeArqOrigem[30], 
	     nomeArqDestino[30];
	     
	//obtendo o nome do arquivo a ser copiado
	printf ("Entre com o nome do arquivo a ser copiado: ");
	fflush (stdin);
	gets (nomeArqOrigem);
	
	//obtendo o nome do arquivo a ser criado
	printf ("Entre com o nome do arquivo a ser criado: ");
	fflush (stdin);
	gets (nomeArqDestino);
	
	//chamando a função
	if (copiarArquivo (nomeArqOrigem, nomeArqDestino) == TRUE)
	{
		printf ("\nCopia realizada com sucesso!");
	}
	else
	{
		printf ("\nErro na abertura dos arquivos!");
	}
}

//implementação das funções
int copiarArquivo (char arqO[], char arqD[])
{
	//declaração de variáveis
	FILE *arq1, *arq2;
	char caracter;
	
	//tentando abrir os dois arquivos
	arq1=fopen(arqO, "r");
	arq2=fopen(arqD, "w");
	
	//testando se houve erro na abertura do arquivo
	if((arq1==NULL) || (arq2 == NULL))
	{
		fclose (arq1);
		fclose (arq2);
		
		return FALSE;
	}
	else
	{
		//lendo o conteúdo do arquivo de origem
		while (fscanf (arq1, "%c", &caracter) != EOF) 
		{
			//escrevendo os valores lidos no arquivo de destino
			fprintf (arq2, "%c", caracter);
		}
		
		//fechando os arquivos
		fclose (arq1);
		fclose (arq2);
		
		return TRUE;
	}
}
```

---

## EXEMPLO 7
remover conteudo do arquivo:

copiar todo o conteudo para outro arquivo, exceto tal dado

copia de volta para o arquivo original
```c
Exemplo 7: desenvolver uma função que removas todas as ocorrências de um número inteiro em determinado
	arquivo
*/

//importação de bibliotecas
#include<stdio.h>

//definição de constantes
#define TRUE 1
#define FALSE 0

//protótipos das funções
int removerArquivo (char nomeArq[], int numero);

//main
void main()
{
	//declaração de variáveis
	char nomeArquivo[30];
	int num, retorno;
	
	//obtendo o nome do arquivo
	printf ("Entre com o nome do arquivo: ");
	fflush (stdin);
	gets (nomeArquivo);
	
	//lendo o número a ser removido	
	printf ("Entre com o numero a ser removido: ");
	scanf ("%d", &num);
	
	//chamando a função e armazenando o retorno
	retorno = removerArquivo (nomeArquivo, num);
	
	//testando o retorno da função
	switch (retorno)
	{
		case -1: printf ("Erro na abertura do arquivo!");
		         break;
		         
		case  0: printf ("Elemento nao encontrado no arquivo!");
		         break;
		        
		default: printf ("Foram feitas %d remocoes do valor %d", retorno, num);		
	}
}

//implementação das funções
int removerArquivo (char nomeArq[], int numero)
{
	//declaração de variáveis
	FILE *arq, *temp;
	int valor, cont=0;
	
	//abrindo os arquivos
	arq = fopen (nomeArq, "r");
	temp = fopen ("temp.txt", "w");	
	
	//testando se houve erro na abertura dos arquivos
	//if ((arq == NULL) || (temp == NULL))
	if (!arq || !temp)
	{
		return -1;
	}
	else
	{
		//copiando para temp todos os números diferentes daquele que deseja-se remover
		while (fscanf (arq, "%d", &valor) != EOF)
		{
			//verificando se não é o elemento a ser removido
			if (valor != numero)
			{
				fprintf (temp, "%d\n", valor);
			}
			else
			{
				cont++;
			}
		}
		
		//fechando os arquivos
		fclose (arq);
		fclose (temp);
		
		//copiando os elementos do arquivo temporário para o original
		copiarArquivo("temp.txt", nomeArq);
		
		return cont;		
	}
}

int copiarArquivo (char arqO[], char arqD[])
{
	//declaração de variáveis
	FILE *arq1, *arq2;
	char caracter;
	
	//tentando abrir os dois arquivos
	arq1=fopen(arqO, "r");
	arq2=fopen(arqD, "w");
	
	//testando se houve erro na abertura do arquivo
	if((arq1==NULL) || (arq2 == NULL))
	{
		fclose (arq1);
		fclose (arq2);
		
		return FALSE;
	}
	else
	{
		//lendo o conteúdo do arquivo de origem
		while (fscanf (arq1, "%c", &caracter) != EOF) 
		{
			//escrevendo os valores lidos no arquivo de destino
			fprintf (arq2, "%c", caracter);
		}
		
		//fechando os arquivos
		fclose (arq1);
		fclose (arq2);
		
		return TRUE;
	}
}
```

---

na versão 2, apaga o arquivo temporario do disco

```c

//importação de bibliotecas
#include<stdio.h>

//definição de constantes
#define TRUE 1
#define FALSE 0

//protótipos das funções
int removerArquivo (char nomeArq[], int numero);

//main
void main()
{
	//declaração de variáveis
	char nomeArquivo[30];
	int num, retorno;
	
	//obtendo o nome do arquivo
	printf ("Entre com o nome do arquivo: ");
	fflush (stdin);
	gets (nomeArquivo);
	
	//lendo o número a ser removido	
	printf ("Entre com o numero a ser removido: ");
	scanf ("%d", &num);
	
	//chamando a função e armazenando o retorno
	retorno = removerArquivo (nomeArquivo, num);
	
	//testando o retorno da função
	switch (retorno)
	{
		case -1: printf ("Erro na abertura do arquivo!");
		         break;
		         
		case  0: printf ("Elemento nao encontrado no arquivo!");
		         break;
		        
		default: printf ("Foram feitas %d remocoes do valor %d", retorno, num);		
	}
}

//implementação das funções
int removerArquivo (char nomeArq[], int numero)
{
	//declaração de variáveis
	FILE *arq, *temp;
	int valor, cont=0;
	
	//abrindo os arquivos
	arq = fopen (nomeArq, "r");
	temp = fopen ("temp.txt", "w");	
	
	//testando se houve erro na abertura dos arquivos
	//if ((arq == NULL) || (temp == NULL))
	if (!arq || !temp)
	{
		return -1;
	}
	else
	{
		//copiando para temp todos os números diferentes daquele que deseja-se remover
		while (fscanf (arq, "%d", &valor) != EOF)
		{
			//verificando se não é o elemento a ser removido
			if (valor != numero)
			{
				fprintf (temp, "%d\n", valor);
			}
			else
			{
				cont++;
			}
		}
		
		//fechando os arquivos
		fclose (arq);
		fclose (temp);
		
		//copiando os elementos do arquivo temporário para o original
		copiarArquivo("temp.txt", nomeArq);
		
		//apagando o arquivo temporário do disco
		remove ("temp.txt");
		
		return cont;		
	}
}

int copiarArquivo (char arqO[], char arqD[])
{
	//declaração de variáveis
	FILE *arq1, *arq2;
	char caracter;
	
	//tentando abrir os dois arquivos
	arq1=fopen(arqO, "r");
	arq2=fopen(arqD, "w");
	
	//testando se houve erro na abertura do arquivo
	if((arq1==NULL) || (arq2 == NULL))
	{
		fclose (arq1);
		fclose (arq2);
		
		return FALSE;
	}
	else
	{
		//lendo o conteúdo do arquivo de origem
		while (fscanf (arq1, "%c", &caracter) != EOF) 
		{
			//escrevendo os valores lidos no arquivo de destino
			fprintf (arq2, "%c", caracter);
		}
		
		//fechando os arquivos
		fclose (arq1);
		fclose (arq2);
		
		return TRUE;
	}
}
```

---


na versão 3, o arquivo original é apagado, o temporario é renomeado.

if (arq == NULL || temp == NULL) PODE SER ESCRITO DE OUTRA FORMA:

if (!arq || !temp)

```c
//importação de bibliotecas
#include<stdio.h>

//definição de constantes
#define TRUE 1
#define FALSE 0

//protótipos das funções
int removerArquivo (char nomeArq[], int numero);

//main
void main()
{
	//declaração de variáveis
	char nomeArquivo[30];
	int num, retorno;
	
	//obtendo o nome do arquivo
	printf ("Entre com o nome do arquivo: ");
	fflush (stdin);
	gets (nomeArquivo);
	
	//lendo o número a ser removido	
	printf ("Entre com o numero a ser removido: ");
	scanf ("%d", &num);
	
	//chamando a função e armazenando o retorno
	retorno = removerArquivo (nomeArquivo, num);
	
	//testando o retorno da função
	switch (retorno)
	{
		case -1: printf ("Erro na abertura do arquivo!");
		         break;
		         
		case  0: printf ("Elemento nao encontrado no arquivo!");
		         break;
		        
		default: printf ("Foram feitas %d remocoes do valor %d", retorno, num);		
	}
}

//implementação das funções
int removerArquivo (char nomeArq[], int numero)
{
	//declaração de variáveis
	FILE *arq, *temp;
	int valor, cont=0;
	
	//abrindo os arquivos
	arq = fopen (nomeArq, "r");
	temp = fopen ("temp.txt", "w");	
	
	//testando se houve erro na abertura dos arquivos
	//if ((arq == NULL) || (temp == NULL))
	if (!arq || !temp)
	{
		return -1;
	}
	else
	{
		//copiando para temp todos os números diferentes daquele que deseja-se remover
		while (fscanf (arq, "%d", &valor) != EOF)
		{
			//verificando se não é o elemento a ser removido
			if (valor != numero)
			{
				fprintf (temp, "%d\n", valor);
			}
			else
			{
				cont++;
			}
		}
		
		//copiando os elementos do arquivo temporário para o original
		//copiarArquivo("temp.txt", nomeArq);
		
		//apagando o arquivo original do disco
		remove (nomeArq);
		
		//renomeando o temporário
		rename ("temp.txt", nomeArq);
		
		return cont;	
	}
}

int copiarArquivo (char arqO[], char arqD[])
{
	//declaração de variáveis
	FILE *arq1, *arq2;
	char caracter;
	
	//tentando abrir os dois arquivos
	arq1=fopen(arqO, "r");
	arq2=fopen(arqD, "w");
	
	//testando se houve erro na abertura do arquivo
	if((arq1==NULL) || (arq2 == NULL))
	{
		fclose (arq1);
		fclose (arq2);
		
		return FALSE;
	}
	else
	{
		//lendo o conteúdo do arquivo de origem
		while (fscanf (arq1, "%c", &caracter) != EOF) 
		{
			//escrevendo os valores lidos no arquivo de destino
			fprintf (arq2, "%c", caracter);
		}
		
		//fechando os arquivos
		fclose (arq1);
		fclose (arq2);
		
		return TRUE;
	}
}
```

---

#PROVA

MATRIZ

STRING

STRUCT

ARQUIVOS (manipular)

1 QUESTAO DE ANALISE

PODE TER QUESTAO MISTURADA

## EXEMPLO 8 - FWRITE
abrindo o arquivo para binario ('wb')
sizeof escreve a quantidade de bits
o resto entendi porra nenhuma

