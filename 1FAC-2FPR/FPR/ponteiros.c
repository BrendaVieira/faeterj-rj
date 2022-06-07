##faltam os codigos iniciais
```c 
void main()
{
  int v[5]={1,2,3,4,5};
  int *p;
  
  p = v;
  
  printf("%d\n", *p);// vai mostrar 1 
  
  p++;//(caminha no endereço do vetor
  
  printf("%d \n", *p);//vai mostrar 2 
}


void main()
{
  int v[5]={1,2,3,4,5};
  int *p;
  
  p = v;
  
  printf("%d (%p)\n", *p,p);// vai mostrar 1 e o endereço
  
  p++;//(caminha no endereço do vetor
  
  printf("%d (%p)\n", *p,p);//vai mostrar 2 e o endereço
}

percebe-se que pula-se a quantidade de bytes que se esta manipulando, no caso um numero inteiro

```
OU

```c
void main ()
{
	//declaração de variáveis
	int v[5] = {1,2,3,4,5};		/* v: guarda o endereço inicial do vetor 
					(ou seja, o endereço no qual está armazenado o elemento 1)*/
					
	/* int *p;			p: guardará o endereço de memória no qual
					se encontrará um número inteiro	*/
	int i;
	
	//p = v;	//p guardará o endereço inicial do vetor (onde está o elemento 1)
	
	//exibindo todos os elementos do vetor
	for (i=0;i<5;i++)
	{
		printf ("%d (%p)\n", *(v+i), v);    //v[i]  ===>   *(v+i)
	}
}
```
## tipos de alocação

```c
void main ()
{
  //declarando variaveis
  int v1[10];//vetor alocado estaticamente (aloca depois da declaração)
  int *v2; //o vetor será alocado dinamicamente (aloca durante a execução)
  int tamanho;
 
  //perguntando ao usuario o tamanho do vetor
  printf ("Entre com o tamanho do vetor: ");
  scanf("%d", &tamanho);
  
  //alocando ao vetor memória de forma dinâmica
 	v2 = (*int) malloc(tamanho*sizeof(int)); //fazendo casting de *void para *int
}

/*
  malloc: tenta alocar determinada quantidade de memoria (em bytes)
      caso não cosiga, retorna NULL.
      Se conseguir, retorna o endereço inicial do bloco alocado.
*/

//verificar se houve fracasso na alocação de memoria
if (v2 ==NULL)
{
  printf("A memoria solicitada nao foi alocada!")
  
}
else
{
  //pode manipular o vetor da mesma forma que fazia antes, quando era alocado estaticamente
  ...
}
```
