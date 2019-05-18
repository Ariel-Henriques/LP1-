#include<stdio.h>
#include<string.h>

struct Preco{
	int var; //[0,1,2]
	union{
		float real; //[0]
		float dolar; //[1]
		float euro; //[2]
	}u;
};

void exibe(struct Preco* p){
	switch(p->var){
		case 0:
			printf("R$: %f\n",p->u.real);
			break;
		case 1:
			printf("U$: %f\n",p->u.dolar);
			break;
		case 2:
			printf("E$: %f\n",p->u.euro);
			break;		
	}
}

void altera(struct Preco* p, char v[], float valor){
	if (strcmp(v,"dolar")==0){
		p->u.dolar=valor;
		p->var=1;
		exibe(p);
	}else{
		 if (strcmp(v,"real")==0){
			p->u.real=valor;
			p->var=0;
			exibe(p);
		 }else{
			 if(strcmp(v,"real")==0){				
				p->u.euro=valor;
				p->var=2;
				exibe(p);
			}else{
				printf("Moeda nao valida\n");
			}
		}
	}
}

int main (void){
	struct Preco item;
	char moeda[4]="real";
	float valor=130.0;
	altera(&item, moeda, valor);
	return 0;
}
	
					
	
