#include <stdio.h>

int main (void){
	
	void concatenarStrings(char string1[], int1,
						   char string2[], int2,
						   char string3[]);
						   
	char palavra1[] = {'p','a','o',''};
	char palavra2[] = {'m','o','r','t','a','d','e','l','a'};
	char novaPalavra[13];
	
	concatenarStrings(palavra1, 4, palavra2, 9, novaPalavra);
	
	int i;
	for(i=o;i<13;i++){
		printf("%c", novaPalavra[i]);
	}
	
	printf("\n");
	
	return 0;
}

void concatenarStrings(char string1[], int1,
						   char string2[], int2,
						   char string3[]) {
	int i, j;
	
	for(i=0;i<t1;i++){
		string3[i] = string1[1];
	}
	for(j=0;j<t2;j++){
		string3[t1+j] = string2[j];
	}
						   }
