#include<stdio.h>

struct Caixa{
	int valor;
	struct Caixa *prox;
};

struct Caixa* concatena (struct Caixa* l1, struct Caixa* l2){
	struct Caixa *p=l1;
	if(p!=NULL){
		p = p->prox;
		while(p->prox!=NULL){
			p = (*p).prox;
		}
	}
	if(l1!=NULL){
		p->prox = l2;
		return (l1);
	}else{
		return (l2);
	}
}

void exibe (struct Caixa *p){
	while(p!=NULL){
		printf("%d ", p->valor);
		p = (*p).prox;
	}
}

void main (void){
	struct Caixa c1, c2, c3, c4, c5;
	struct Caixa *l1, *l2;
	l1 = &c1;
	l2 = &c3;
	c1.valor = 3;
	c1.prox = &c2;
	c2.valor = 0;
	c2.prox = NULL;
	c3.valor = 4;
	c3.prox = &c4;
	c4.valor = 7;
	c4.prox = &c5;
	c5.valor = 8;
	c5.prox = NULL;
	l1 = concatena(l1, l2);
	exibe(l1);
}
