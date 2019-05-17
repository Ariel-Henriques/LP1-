#include<stdio.h>

struct Posicao{
	int x;
	int y;
};

struct Personagem{
	int i;
	struct Posicao p;
	int k;
	
};
void le_posicao(struct Personagem* p){
	printf("Posicao X: ");
	scanf("%d", &p->p.x);
	printf("Posicao Y: ");
	scanf("%d", &p->p.y);
	}
	

void le_personagem(struct Personagem* p, int k){
	for (int i=0; i<k; i++){
		printf("\nIdentidade: ");
		scanf("%d", &(p+i)->i);		
		le_posicao(p+i);
		printf("Pontuacao: ");
		scanf("%d", &(p+i)->k);
	}
}
int maior_x(struct Personagem* p, int k){
	int x;
	for(int i=0; i<k; i++){
		if((p+i)->p.x > x){
			x=(p+i)->p.x;
		}
	}
	return x;
}

int maior_y(struct Personagem* p, int k){
	int y;
	for(int i=0; i<k; i++){
		if((p+i)->p.y > y){
			y=(p+i)->p.y;
		}
	}
	return y;
}

void mapa(struct Personagem* p, int k){
//Vou supor que todas as coordenadas x e y são inteiros positivos.
	int x= maior_x(p, k);	
	int y=maior_y(p, k);
	int a=0;
	for(int j=y; j>=0; j=j-1){
		for(int i=0; i<=x; i++){
			for( int z=0; z<k; z++){
				if(i==(p+z)->p.x && j==(p+z)->p.y){
					printf(" %d", (p+z)->i);
					a=1;
				}
			}
		if(j==0 && a==0){
			printf(" %d", i);
		}else{
			if(i==0 && j!=0 && a==0){
				printf(" %d", j);
			}else{
				if(a==0){
					printf("  ");
				}
			}
		}
		a=0;			
		}
	printf("\n");
	}
}
			


 

int main (void){
	struct Personagem P[10];
	le_personagem(P, 10);
	mapa(P, 10);	
	return 0;
}
