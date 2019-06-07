#include<stdio.h>


struct Pessoa{
    int idade;
    int nome[64];
    int peso;
};

void preencher(struct Pessoa* p){
    printf("Idade: ");
    scanf("%d", &p->idade);
    printf("Nome: ");
    scanf("%s", p->nome);
    printf("Peso: ");
    scanf("%d", &p->peso);
}

void preencher_arq(FILE* f, struct Pessoa* p){
    fwrite(p, sizeof(struct Pessoa), 1, f);
}

void ler_arq(FILE* f, struct Pessoa* p){
    fread(&p->idade, sizeof(int), 1, f);
    fread(p->nome, sizeof(int), 64, f);
    fread(&p->peso, sizeof(int), 1, f);
    printf("%d, %s, %d\n", p->idade, p->nome, p->peso);
}


int main (void){
    struct Pessoa p[10];
    for(int i=0; i<10; i++){
        preencher(p+i);
    }
    FILE* f = fopen("C:/cygwin64/home/Ariel/projeto-c/jooj.bin", "wb");
    for(int i=0; i<10; i++){
        preencher_arq(f, p+i);
    }
    fclose(f);
    f = fopen("C:/cygwin64/home/Ariel/projeto-c/jooj.bin", "rb");
    for(int i=0; i<10; i++){
	//printf("safe");
        ler_arq(f, p+i);
    }
    fclose(f);
    return 0;
}
