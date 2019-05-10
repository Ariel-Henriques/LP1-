#include<stdio.h>

struct Ponto{
    int x;
    int y;
    int z;
};

void Print (struct Ponto* a,struct Ponto* b ,struct Ponto*c){
    printf("%d\n%d\n%d\n", a->y, b->y, c->y);
}

void Soma (struct Ponto* a,struct Ponto* b,struct Ponto* c){
    a->z = a->z +10;
    b->z = b->z +10;
    c->z = c->z +10;
}

int main (void){
    struct Ponto v1={1, 0, 5}, v2={3, 3, 3}, v3={0, 10, 0};
    Print(&v1, &v2, &v3);
    Soma(&v1, &v2, &v3);
    printf("(%d, %d, %d)", v2.x, v2.y, v2.z);
    return 0;
}
    
