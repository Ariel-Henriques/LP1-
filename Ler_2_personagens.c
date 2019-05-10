#include<stdio.h>

struct Personagem{
    int forca;
    int energia;
    int experiencia;
};

struct Personagem preencheA (void){
    struct Personagem a;
    scanf("%d", &a.forca);
    scanf("%d", &a.energia);
    scanf("%d", &a.experiencia);
    return a;
}

int main (void){
    struct Personagem a, b;
    a=preencheA();
    b=preencheA();
    printf("(%d,%d,%d) vs (%d,%d,%d)\n",
           a.forca, a.energia, a.experiencia,
           b.forca, b.energia, b.experiencia);
    return 0;
}
    
    
