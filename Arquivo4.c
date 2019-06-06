#include<stdio.h>
#include<string.h>

void preencher(FILE* f, char* c){
	fwrite(c, sizeof(char), strlen(c), f);
	
}

int main (void){
	char str[26];
	FILE* f = fopen("/home/ime/Área de Trabalho/arq.jota.txt", "w");
	for(int i=0; i<10; i++){
		printf("Frase: ");
		scanf("%s", str);
		preencher(f, str);
	}
	fclose(f);
	return 0;
}
