#include <stdio.h>

struct Personagem{
    int forca;
    int energia;
    int experiencia;
};

int main (void){
    struct Personagem a1, a2={18, 20, 25};
    a1.forca=10;
    a1.energia=50;
    a1.experiencia=30;    
    //printf("%d %d %d, %d %d %d", a1.forca, a1.energia, a1.experiencia, a2.forca, a2.energia, a2.experiencia);
    return 0;
}
