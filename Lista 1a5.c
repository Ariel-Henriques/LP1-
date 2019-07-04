#include<stdio.h>

struct Caixa{
	int valor;
	struct Caixa* prox;
};

void exibe (struct Caixa* p){
	while (p!=NULL){
		printf("%d ", (*p).valor); //(*p).valor
	        p = (*p).prox;
	}
	printf("\n");
}

int contem (struct Caixa* p, int n){
	while (p!=NULL){
		if ((*p).valor == n){			
			return 1;
		}else{
			p = p->prox;
		}
	}
	return 0;
}

struct Caixa* removeL(struct Caixa* p, int n){	
	struct Caixa *k, *j;
	printf("%d\n",(*p).valor);
	k = p;
	while ((k!=NULL) && (*k).valor!=n){
		j = k;
		k = k->prox;				
	}
	if((k!=NULL) && (k!=p)){
		//printf("%d\n", (*k).valor);
		j->prox = (*k).prox;		
		//free(p);
		return(p);
	}else{
		return((*p).prox);
	}
	
}
		 

int main (void){
	struct Caixa c1, c2, c3, c4, c5;
	struct Caixa* cabeca = &c1;
	c1.valor = 1;
	c1.prox = &c2;
	c2.valor = 3;
	c2.prox = &c3;
	c3.valor = 9;
	c3.prox = &c4;
	c4.valor = 7;
	c4.prox = &c5;
	c5.valor = 5;
	c5.prox = NULL;
	c1.prox = &c3;
	exibe(cabeca);
	cabeca = &c2;
	c2.prox = &c1;
	exibe(cabeca);
	printf("Buscar: ");
	int k;
	scanf("%d", &k);
	if (contem(cabeca, k) == 1){
		printf("O valor esta contido\n");
	}else{
		printf("O valor nao esta contido\n");
	}
	int q;
	printf("Remover: ");
	scanf("%d", &q);
	cabeca = removeL(cabeca, q);
	exibe(cabeca);
	return 0;
}
