## Structs
* Estrutura de dados Heterogenea - guarda valores de tipos diferentes numa mesma variável,
 mas que são relacionáveis entre si.
* Classes de objetos são exemplos de structs



	TAluno a1, a2; 
	
	/*2 structs que tem a mesma composição
	(bits sao reservados para armazenar tais infos)*/
  
  gets(turma[i].nome); //lê o nome do aluno, para determinada posição do vetor de struct
  
  ## Exemplo
  
```c

	/*
	Exemplo: fazer um programa que armazene em um vetor de structs as informações (nome, av1, av2, media, situação) 
	dos alunos de determinada turma.
	*/
#include <stdio.h>
#include <string.h>

#define NUM_ALUNOS 5

//definição de tipos
typedef struct{
	char nome[30];
	float av1, av2, media;
	char situacao[10];
} TAluno;

//protótipos de funções
void leituraDadosAlunos (TAluno turma[], int quantidade);
void calculoMedia (TAluno turma[], int quantidade);
void exibirDadosAlunos (TAluno turma[], int quantidade);

//main
void main()
{
	//declarando variáveis
	TAluno turma [NUM_ALUNOS];
	//preenchendo os dados dos alunos
	leituraDadosAlunos (turma, NUM_ALUNOS);
	
	//calculando media
	calculoMedia (turma, NUM_ALUNOS);
	
	//exibindo os dados
	exibirDadosAlunos (turma, NUM_ALUNOS);
}

//funções
void leituraDadosAlunos (TAluno turma[], int quantidade)
{
	//declaração de variaveis
	int i;
	
	//percorrendo e preenchendo o vetor
	for (i=0; i<=quantidade; i++)
	{
		printf("Nome: ");
		fflush(stdin); //limpa o campo de buff
		gets (turma[i].nome); //onde vai guardar o dado no struct
		
		printf("\nAV1: ");
		scanf("%f", &turma[i].av1); //onde vai guardar a av1 no struct

		printf("\nAV2: ");
		scanf("%f", &turma[i].av2); //onde vai guardar a av2 no struct
	}
}

void calculoMedia (TAluno turma[], int quantidade)
{
	//declarando variaveis
	int i, media;
	
	//percorrendo o vetor
	for (i=0; i<=quantidade; i++)
	{
		//calculando a media do aluno
		turma[i].media = ((turma[i].av1)+(turma[i].av2))/2;
	
		if(turma[i].media >= 6)
		{
			strcpy (turma[i].situacao, "APROVADO");
		}
		else
		{
			if (turma[i].media < 4)
			{
				strcpy (turma[i].situacao, "REPROVADO");
			}
			else
			{
				strcpy (turma[i].situacao, "AVF");
			}
		}
	}	
}

void exibirDadosAlunos (TAluno turma[], int quantidade)
{
	int i;
	
	for (i=0; i<=quantidade; i++)
	{
		printf("\nNome: %s\n", turma[i].nome);
		printf("\nAV1: %.1f  -  AV2: %.1f", turma[i].av1, turma[i].av2);
		printf("\nMedia: %.1f  -  Situacao: %s\n", turma[i].media, turma[i].situacao);
	}
	
}
``` 
  
  
