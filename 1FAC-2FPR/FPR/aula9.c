* Matriz Simetrica: Normal é igual sua Transposta

1 2 3 

2 6 8

3 8 9 

```c
m[i][j] = mt[j][i]
// diagonal principal já é essa condição. pode-se retirar para diminuir processamento
```

QUESTAO 4
Dada uma matriz 6x6, determinar se é simétrica ou não

### VERSAO 1
```c
#include <stdio.h>

//definição de constantes

#define TRUE 1
#define FALSE 0

void 

```


### VERSAO 2, faz tres comparações

para melhorar o codigo compara-se somente a matriz triangular superior, pq o restante se compara duas vezes

1 **2** **3** 

2 6 **8**

3 8 9 

linha (i) vai até a penultima linha [ORDEM-1] (base da matriz triangular inferior)
coluna (j) começa na proxima [i+1]

---

QUESTAO 5

Dada matriz 10x8, gerar vetor onde cada posição seja a soma da coluna
inverter a varredura da matriz, percorrendo coluna por coluna

soma=0 no inicio ou no final da varredura, senao vai acumular todas as somas




