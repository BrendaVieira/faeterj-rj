/*
	STRINGS: cadeia de caracteres, vetor

	char nome[30] - 0...29
	char UF[3] - RJ\0

	void main(){
	int a=5;
	float=5.7;
	
	printf("a=%d e b=%1.f\n" a,b);
	
	funcao(a,b);
	
	printf("a=%d e b=%1.f\n" a,b); //nao alterou os numeros da main, s� os da fun��o
	}
	
	void funcao(int x, float y){
	z=5;
	x=x+y;
	y=(y-x)/2;
	}
	
	MUDAN�AS - por valor, por refer�ncia
	
	void main(){
	int a=5;
	float=5.7;
	
	printf("a=%d e b=%1.f\n" a,b);
	
	funcao(a,b);
	
	printf("a=%d e b=%1.f\n" a,b);
	}
	
	void funcao(int *x, float *y){
	z=5;
	x=*x+*y;
	y=(*y-*x)/2;
	}

	numOcorrencias(char s[], char c);
	{
	int i, cont=0;
	
	for(i=0;i<s[i];i++)
	{
	if(s[i] == c)
	cont++;
	}
	return cont:
	}


	//fflush limpa o buffer
	ignora a entrada do teclado (enter)
	esse caracter fica no buffer
	
	*n�o � usado & para string pq j� busca o endere�o
	

*/
