#include<stdio.h>

struct Caixa{
    int n;
    struct Caixa* p;
};

void exibe(struct Caixa* caixa){
    while(caixa!=NULL){
        printf("%d", caixa->n);
        caixa=caixa->p;
    }
}

int main (void){
    struct Caixa a, b, c, d, e;
    a.n=1;
    a.p=&b;
    b.n=3;
    b.p=&c;
    c.n=9;
    c.p=&d;
    d.n=7;
    d.p=&e;
    e.n=5;
    e.p=NULL;
    exibe(NULL);
    return 0;
}
