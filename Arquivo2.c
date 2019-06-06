#include<stdio.h>

void ler(FILE* f){
	int a = fgetc(f);
	while(a!=EOF){
		printf("%c", a);
		a = fgetc(f);
	}
}

int main (void){
	FILE* f = fopen("C:/Users/Ariel/Desktop/projeto-c/jaaj.txt" ,"r");
	ler(f);
	fclose(f);
	return 0;
}
	
