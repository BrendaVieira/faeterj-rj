* Matriz Simetrica: Normal � igual sua Transposta

1 2 3 

2 6 8

3 8 9 

```c
m[i][j] = mt[j][i]
// diagonal principal j� � essa condi��o. pode-se retirar para diminuir processamento
```

QUESTAO 4
Dada uma matriz 6x6, determinar se � sim�trica ou n�o

### VERSAO 1
```c
#include <stdio.h>

//defini��o de constantes

#define TRUE 1
#define FALSE 0

void 

```


### VERSAO 2, faz tres compara��es

para melhorar o codigo compara-se somente a matriz triangular superior, pq o restante se compara duas vezes

1 **2** **3** 

2 6 **8**

3 8 9 

linha (i) vai at� a penultima linha [ORDEM-1] (base da matriz triangular inferior)
coluna (j) come�a na proxima [i+1]

---

QUESTAO 5

Dada matriz 10x8, gerar vetor onde cada posi��o seja a soma da coluna
inverter a varredura da matriz, percorrendo coluna por coluna

soma=0 no inicio ou no final da varredura, senao vai acumular todas as somas




