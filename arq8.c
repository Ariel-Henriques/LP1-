#include<stdio.h>
#include<string.h>

struct Pessoa{
	int idade;
	char nome[50];
};

void ler (struct Pessoa v[], int n){
	for(int i=0; i<n;  i++){
		printf("Idade: ");
		scanf("%d", &(*(v+i)).idade);
		printf("Nome: ");
		scanf("%s", (*(v+i)).nome);
	}
}

void gravar (FILE *f, struct Pessoa v[], int k){
	for(int i=0; i<k; i++){
		fwrite((v+i), sizeof(char), strlen((*(v+i)).nome), f);
		fwrite((v+i), sizeof(int), 1, f);
	}
}

void lerarq(FILE *f, struct Pessoa v[], int n){
	for(int i=0; i<n; i++){
		fread((v+i), sizeof(char), strlen((*(v+i)).nome),f);
		fread((v+i), sizeof(int), 1, f);
	}
}

void escrever(struct Pessoa v[], int k){
	for(int i=0; i<k; i++){
		printf("%s, %d\n", (v+i)->nome, (v+i)->idade);
	}
}
	

void main (void){
	struct Pessoa v[100];
	ler(v, 100);
	FILE *f = fopen("C:/Users/Ariel/Desktop/ex8.bin", "wb");
	gravar(f, v, 100);
	fclose(f);
	f = fopen("C:/Users/Ariel/Desktop/ex8.bin", "rb");
	lerarq(f, v, 100);
	fclose(f);
	escrever(v, 100);
}
