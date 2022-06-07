/* Atividade 4 - AV1

Fazer uma função que, dado um número inteiro positivo, “codifique-o”, gerando um novo número consistindo na adição de uma unidade a cada um dos algarismos do valor original, como nos exemplos abaixo:

Exemplo 1:

            Número original:            4075
            Número codificado:       5186
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
		
		// confirmar que é um número positivo
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
// implementação da função
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
			
			//atualização pela potencia de 10
			pot *= 10;
	}
	
	return novoNum;
}
