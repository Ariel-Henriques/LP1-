#include<stdio.h>


struct Identidade{
	char nome[50];
	int matricula;
};

void preenche(struct Identidade* p){
	printf("Escreva o nome: ");
	scanf("%s", &p->nome);
	printf("\nEscreva a matricula: ");
	scanf("%d", &p->matricula);
	
}

int main (void){
	struct Identidade I;
	struct Identidade* p;
	p=&I;
	preenche(p);
	printf("\nNome: %s Matricula: %d\n", I.nome, I.matricula);
	return 1;

}
	
