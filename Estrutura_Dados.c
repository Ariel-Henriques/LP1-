#include<stdio.h>


struct Identidade{
	char nome[50];
	int matricula;
};

struct Dados{
	struct Identidade I;
	char endereco[200];
	char cor_favorita[50];
};

void preenche(struct Identidade* p){
	printf("Escreva o nome: ");
	scanf("%s", &p->nome);
	printf("Escreva a matricula: ");
	scanf("%d", &p->matricula);
	
}

void preenche2(struct Dados* p){
	preenche(&p->I);
	printf("Endereco: ");
	scanf("%s", &p->endereco);
	printf("Cor favorita: ");
	scanf("%s", &p->cor_favorita);
}

int main (void){
	struct Dados D;
	preenche2(&D);
	printf("\nNome: %s, Matricula: %d, Endereco: %s, Cor favorita: %s", D.I.nome, D.I.matricula, D.endereco, D.cor_favorita);
	return 0;
} 
