/* Atividade 4 - AV1

Fazer uma fun��o que, dado um n�mero inteiro positivo, �codifique-o�, gerando um novo n�mero consistindo na adi��o de uma unidade a cada um dos algarismos do valor original, como nos exemplos abaixo:

Exemplo 1:

            N�mero original:            4075
            N�mero codificado:       5186
*/

#include <stdio.h>
int numCod(int num);

//main
void main()
{
	int numOrig, numCodificado;
	
	do
	{
		printf("Entre com um numero positivo: ");
		scanf("%d", &numOrig);
		
		// confirmar que � um n�mero positivo
		if(numOrig<=0)
		{
			printf ("ERRO: Entre com um numero positivo ");
		}
	}
	while (numOrig<=0);
	
	// chamada
	numCodificado = numCod(numOrig);
	
	printf("\nNumero Original: %d\n", numOrig);
	printf("\nNumero Codificado: %d\n", numCodificado);

}
// implementa��o da fun��o
int numCod (int num)
{
	//variaveis
	int alg, pot = 1, novoNum = 0;
	
	// abrindo o numero em algarismos
	while (num != 0)
	{
		
		alg = num%10;
      
		num = num/10;
      
		// novo numero
		if (alg < 9)
		{
			alg = alg + 1;
		}
		else
		{
			alg = 0;
		}			
			novoNum += alg*pot; 
			
			//atualiza��o pela potencia de 10
			pot *= 10;
	}
	
	return novoNum;
}
