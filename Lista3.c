#include<stdio.h>

struct Caixa{
    int n;
    struct Caixa* p;
};

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
    e.p=NULL
    printf("%d->%d->%d->%d->%d\n", a.n, a.p->n, a.p->p->n , a.p->p->p->n, a.p->p->p->p->n);
    return 0;
}
