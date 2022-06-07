#include<stdio.h>
/*QUESTÃO 08: Em uma empresa deseja-se fazer um
levantamento sobre algumas informações dos seus 250 funcionários. Cada funcionário
deverá responder um questionário ao qual informará os seguintes dados: matrícula,
gênero, idade, salário e tempo (em anos) de trabalho na empresa. A execução do
programa deve exibir os seguintes itens:

a)    Quantidade
de funcionários que ingressaram na empresa com menos de 21 anos;

b)   Quantidade
de funcionários do gênero feminino;

c)    Média
salarial dos homens;

d)   Matrícula
dos funcionários mais antigo e mais novo.*/

#define QUANT 250

int main()
{	 
	 int i, matricula, idade, tempo, maiorMaT, menorMaT, menor21 = 0, quantF = 0, quantM = 0, maiorT = 0, menorT = 50;
	 float salario, totalSalarioM = 0, mediaSalarioM;
	 char genero;
	 
	 
	 for (i=1;i<=QUANT;i++)
	 {
	 printf("Entre com matricula: " );
	 scanf("%d", &matricula);
	 
	 printf("Entre com genero(F/M): " );
	 fflush(stdin);
	 scanf("%c", &genero);
	 
	 printf("Entre com idade: " );
	 scanf("%d", &idade);
	 
	 printf("Entre com salario(R$): " );
	 scanf("%f", &salario);
	 
	 printf("Entre com tempo em anos de trabalho: " );
	 scanf("%d", &tempo);
//	a) Quantidade de funcionários que ingressaram na empresa com menos de 21 anos;
	
	if(idade - tempo < 21)
	{
		menor21++;
	}
// b) Quantidade de funcionários do gênero feminino;
	if(genero == 'F')
	{
		quantF++;
	}
// c) Total salarial dos homens, Média salarial dos homens fora do for;
	else
	{
		quantM++;
		totalSalarioM = totalSalarioM + salario;
	}
//	d) Matrícula do funcionário mais antigo e mais novo;
	if(tempo > maiorT)
	{
		maiorT = tempo;
		maiorMaT = matricula;
	}
	if(tempo < menorT)
	{
		menorT = tempo;
		menorMaT = matricula;
	}
}
//c) Média salarial dos homens
	mediaSalarioM = totalSalarioM/quantM;

// Resultados
	printf("Menos de 21 anos: %d ", menor21);
	printf("Funcionarios do genero feminino: %d ", quantF);
	printf("Media salarial dos homens: R$.2f ", mediaSalarioM);
	printf("Funcionario mais antigo: %d ", maiorMaT);
	printf("Funcionario mais novo: %d ", menorMaT);
}
