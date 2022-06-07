#include<stdio.h>
/*QUEST�O 08: Em uma empresa deseja-se fazer um
levantamento sobre algumas informa��es dos seus 250 funcion�rios. Cada funcion�rio
dever� responder um question�rio ao qual informar� os seguintes dados: matr�cula,
g�nero, idade, sal�rio e tempo (em anos) de trabalho na empresa. A execu��o do
programa deve exibir os seguintes itens:

a)    Quantidade
de funcion�rios que ingressaram na empresa com menos de 21 anos;

b)   Quantidade
de funcion�rios do g�nero feminino;

c)    M�dia
salarial dos homens;

d)   Matr�cula
dos funcion�rios mais antigo e mais novo.*/

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
//	a) Quantidade de funcion�rios que ingressaram na empresa com menos de 21 anos;
	
	if(idade - tempo < 21)
	{
		menor21++;
	}
// b) Quantidade de funcion�rios do g�nero feminino;
	if(genero == 'F')
	{
		quantF++;
	}
// c) Total salarial dos homens, M�dia salarial dos homens fora do for;
	else
	{
		quantM++;
		totalSalarioM = totalSalarioM + salario;
	}
//	d) Matr�cula do funcion�rio mais antigo e mais novo;
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
//c) M�dia salarial dos homens
	mediaSalarioM = totalSalarioM/quantM;

// Resultados
	printf("Menos de 21 anos: %d ", menor21);
	printf("Funcionarios do genero feminino: %d ", quantF);
	printf("Media salarial dos homens: R$.2f ", mediaSalarioM);
	printf("Funcionario mais antigo: %d ", maiorMaT);
	printf("Funcionario mais novo: %d ", menorMaT);
}
