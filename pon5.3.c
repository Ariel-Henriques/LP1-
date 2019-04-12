#include <stdio.h>

void desconta_compra(int c1, int c2, int *vet){	
	int* p;
	char i;
	for(i=1; i<=5; i++){
	if(c1>c2){
		p=&c1;
			}
			else{
				p=&c2;				
			}
		*p=*p-vet[i];
		printf("Saldo conta 1: %d\n", c1);
		printf("Saldo conta 2: %d\n \n", c2);
	}
}	
	

int main (void){
	char i;
	int compras[5];
	int c1, c2;
	compras[1]=100;
	compras[2]=50;
	compras[3]=80;
	compras[4]=30;
	compras[5]=20;
	printf("Saldo conta 1: ");
	scanf("%d", &c1);
	printf("Saldo conta 2: ");
	scanf("%d", &c2);
	printf("\n");	
	desconta_compra(c1, c2, compras);
			
	return 0;
}
