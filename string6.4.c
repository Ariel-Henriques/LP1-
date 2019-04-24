#include<stdio.h>

int strlen2(char* string){
	int i, j;	
	j=0;			
	for(i=0; i<=j; i++){
		if(string[i] != '\0'){			
			j=j+1;
			}
		else{
			i=j+1;
			}
		}
	return j;
	}

int main (void){
	char frase[10000];
	int k;
	printf("Escreva uma frase: ");
	scanf("%s", &frase);	
	k=strlen2(frase);
	printf("%d", k);
	return 0;
	}
