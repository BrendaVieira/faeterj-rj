STRINGS: cadeia de caracteres

//Declaração: 
`chr nome [30];` |M|A|R|I|A|\0|.|.|.|[...]

`char UF [3];` |R|J|\0| //Sempre deve possuir esse caractere nulo para identificar o fim da string

* Exemplo
```c
/*Dados uma string e um caractere, desenvolver uma funcao que determine o nº de ocorrencias do caracter na string*/

  int Ocorrencias(char S[], char c)
  {
    //Declaração de variaveis
    int i;
    
    //percorrendo a string
    for(i=0; S[i]!='\0'; i++) //poderia ser while(S[i]='\0') ou apenas S[i] no for
    {
      //verificando se o caracter foi encontrado
      if(S[i]==c)
      { 
        cont++;
      }
      return cont;
    }
  }
  
  void main()
  {
    //declaração de variaveis
    char Str[30], caracter;
    int quant;
    
    //obtendo valor de entrada
    printf("entre com uma string: ");
    scanf("%s", Str);
    
    /*scanf e &Str, nesse caso é ERRADO, pois a string já é endereço de memoria/ redundante
    melhor usar GETS (Str) , pois pega todos os caracteres da string
    -como foi digitado uma string + o ENTER, a leitura irá incluir o caracter ENTER, entao
    antes de ler usa-se fflush para limpar o buffer */
    
    printf("entre com um caracter a ser buscado: ");
    scanf("%c", &caracter);
    
    //chamando a função
    quant = Ocorrencias(Str, caracter);
    
    //exibindo o resultado
    
    printf("Foram encontrados %d ocorrencias do caracter %c na string %s", quant, Str);
    }
  }
```
ATUALIZANDO O CODIGO 
```c
  #include <stdio.h>
  
  int Ocorrencias(char S[], char c)
  {
    //Declaração de variaveis
    int i, cont=0;
    
    //percorrendo a string
    for(i=0; S[i]!='\0'; i++) //poderia ser while(S[i]='\0') ou apenas S[i] no for
    {
      //verificando se o caracter foi encontrado
      if(S[i]==c)
      { 
        cont++;
      }
    }
      return cont;
  }
  
  void main()
  {
    //declaração de variaveis
    char str[30], caracter;
    int quant;
    
    //obtendo valor de entrada
    printf("entre com uma string: ");
    fflush (stdin);
    gets (str);
    
    printf("entre com um caracter a ser buscado: ");
    fflush (stdin);
    scanf("%c", &caracter);
    
    //chamando a função
    quant = Ocorrencias(str, caracter);
    
    //exibindo o resultado
    
    printf("Foram encontrados %d ocorrencias do caracter %c na string %s", quant, caracter, str);
    
  }
```
#### FUNÇÃO PARA CONTAR O NUMERO QUE CARACTERES DA STRING

```c
  #include <stdio.h>
  
  int Ocorrencias(char S[], char c)
  {
    //Declaração de variaveis
    int i, cont=0;
    
    //percorrendo a string
    for(i=0; S[i]!='\0'; i++) //poderia ser while(S[i]='\0') ou apenas S[i] no for
    {
        cont++;
    }
      return cont;
  }
  
  void main()
  {
    //declaração de variaveis
    char str[30], caracter;
    int quant;
    
    //obtendo valor de entrada
    printf("entre com uma string: ");
    fflush (stdin);
    gets (str);
    
    
    //chamando a função
    quant = Ocorrencias(str, caracter);
    
    //exibindo o resultado
    
    printf("Foram encontrados %d caracteres", quant);
    
  }
```
#### RESUMINDO AINDA MAIS

```c
  #include <stdio.h>
  //funcao de deermina a quantidade de caracteres
  
  int Ocorrencias(char S[], char c)
  {
    //Declaração de variaveis
    int i;
    
    //percorrendo a string
    for(i=0; S[i]!='\0'; i++) 
      return i;
  }
  
  /*
  quantidade de i = cont ou 
  while (S[i]!='\0')
  {
  i++;
  }
  */
  void main()
  {
    //declaração de variaveis
    char str[30], caracter;
    int quant;
    
    //obtendo valor de entrada
    printf("entre com uma string: ");
    fflush (stdin);
    gets (str);
    
    
    //chamando a função
    quant = Ocorrencias(str, caracter);
    
    //exibindo o resultado
    
    printf("Foram encontrados %d caracteres", quant);
    
  }
```
