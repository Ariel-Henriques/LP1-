#include<stdio.h>

enum Dia{
	domingo,
	segunda,
	terca,
	quarta,
	quinta,
	sexta,
	sabado
};

char* nome(int a){
	switch(a){
		case domingo:
			return "domingo";
			break;
		case segunda:
			return "segunda";
			break;
		case terca:
			return "terca";
			break;
		case quarta:
			return "quarta";
			break;
		case quinta:
			return "quinta";
			break;
		case sexta:
			return "sexta";
			break;
		case sabado:
			return "sabado";
			break;
		default:
			printf ("erro");
	}
}		


int main (void){
	int a;
	printf("Escolha um dia: ");
	scanf("%d", &a);
	printf("%s\n", nome(a));
	return 0;
}
