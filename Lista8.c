#include<stdio.h>
#include<stdlib.h>

struct Caixa{
	int valor;
	struct Caixa *prox;
};

int busca(struct Caixa *p, int n){
	while(p!=NULL){
		if(p->valor == n){
			return (1);
		}
		p = (*p).prox;
	}
	return 0;
}

struct Caixa* inserefim(struct Caixa *p, int n){
	struct Caixa *w, *y;
	w=p;
	if(p!=NULL){
		while((*w).prox!=NULL){
			w = (*w).prox;
		}
	}
	y = malloc(sizeof(struct Caixa));
	(*y).valor = n;
	(*y).prox = NULL;	
	if(p==NULL){
		p = y;
	}else{
		(*w).prox = y;
	}
	return p;
	
		
}
	
	
void exibe (struct Caixa *p){
	while(p!=NULL){
		printf("%d ", (*p).valor);
		p = p->prox;
	}
	
}

struct Caixa* concatena (struct Caixa* l1, struct Caixa* u){
	while(u!=NULL){
		if(busca(l1, u->valor) == 0){			
			l1 = inserefim(l1, u->valor);			
		}
	u = (*u).prox;
	}
	return (l1);
} 		

int main (void){
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
	return 0;
}

	
