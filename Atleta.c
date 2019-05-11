#include<stdio.h>

struct Atleta{
    char nome[50];
    int idade;
    float velocidade;
};

void preencheA(struct Atleta* p){
    printf("Nome: ");
    scanf("%s", p->nome);
    printf("Idade: ");
    scanf("%d", &p->idade);
    printf("Velocidade: ");
    scanf("%f", &p->velocidade);    
}

void escreveA (struct Atleta* p){
    printf("Nome: %s, Idade: %d, Velocidade: %f", p->nome, p->idade, p->velocidade);
    }

int main (void){
    struct Atleta a, b, c;
    preencheA(&a);
    preencheA(&b);
    preencheA(&c);
    escreveA(&a);
    printf("\n");
    escreveA(&b);
    printf("\n");
    escreveA(&c);
    printf("\n");
    return 0;
}
    
