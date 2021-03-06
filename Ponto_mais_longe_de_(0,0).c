#include <stdio.h>
#include <math.h>

struct Ponto{
	int x;
	int y;
};

void preenche_ponto(struct Ponto* p){
	printf("X: ");
	scanf("%d", &p->x);
	printf("Y: ");
	scanf("%d", &p->y);
}

void preenche_vetor(struct Ponto* p, int k){
	for (int i=0; i<k; i++){
		preenche_ponto(p+i);
		printf("\n");
	}
}

struct Ponto longe_da_origem(struct Ponto* p, int k){
	struct Ponto Q;
	Q.x=0;
	Q.y=0;
	float q=0;	
	for (int i=0; i<k; i++){
		float a=sqrt(pow((p+i)->x,2)+pow((p+i)->y,2));
		if (a > q){
			q=a;
			Q.x=(p+i)->x;
			Q.y=(p+i)->y;			
			}
		}
	return Q;
}

int main (void){	
	struct Ponto vet[10], M;	
	preenche_vetor(vet, 10);
	M=longe_da_origem(vet, 10);	
	printf("Ponto mais longe: (%d,%d)", M.x, M.y);	
	return 0;
}
