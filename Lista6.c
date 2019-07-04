#include<stdio.h>
#include<stdlib.h>

struct Caixa{
    int valor;
    struct Caixa *prox;
};

struct Caixa* insere(struct Caixa* l, int n){
    //printf("chaach2");
    struct Caixa *k, *q, *t;
    k=l;
    q=NULL;	
    if(l!=NULL){
        while ((k!=NULL) && (n > (*k).valor)){
            q = k;
            k = k->prox;
        }
    }
    //printf("chaach");
    t = malloc(sizeof(struct Caixa));
    t->valor = n; 
    //printf("chaach");
    if(l==NULL){
        l = t;
	t->prox = NULL;	
    }else{
	if(q==NULL){
		l = t;
		t->prox = k;
	}else{
        	q->prox = t;
		t->prox = k;
	}
    }
    return (l);
}

void exibe (struct Caixa *p){
    while (p!=NULL){
        printf("%d ", p->valor);
        p = (*p).prox;
    }
    printf("\n");
}

int main (void){
    struct Caixa *p;
    p=NULL;
    int k;
    scanf("%d", &k);
    //printf("chaach");    
    while(k>0){
        //printf("chaach");
        p = insere(p, k);
        exibe(p);
        scanf("%d", &k);
    }
    return 1;
}
