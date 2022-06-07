/* Atividade 5 - AV1

Fazer uma programa que permane�a lendo valores enquanto estes estiverem em ordem crescente,
e determine a quantidade de valores fornecidos assim como a quantidade de n�meros distintos
(neste �ltimo caso, desconsiderar o valor respons�vel pela parada da leitura).

Exemplo:

     Sequ�ncia de n�meros fornecidos:
     5  7  9  9   12  15  15  15  18  7

     Quantidade de valores: 10
     Quantidade de valores distintos: 6
*/

#include <stdio.h>

int main()
{
	// vari�veis
	int num, cont=0, dist=0, menor=-999;
	
	printf("Entre com numeros em ordem crescente (um por vez): ");
	scanf("%d", &num);
	
	while (num>=menor)
	{	
		if (num!=menor)
		{
			dist++;
		}
		
		menor=num;
		
		printf("Entre com numeros em ordem crescente (um por vez): ");
		scanf("%d", &num);		
        
		cont++;	
	}
	printf ("Quantidade de numeros fornecidos:%d\n", cont);
	printf ("Quantidade de numeros distintos:%d ", dist);
}
