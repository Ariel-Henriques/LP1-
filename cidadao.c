#include<stdio.h>

union Cidadao{
	int CPF;
	int RG;
	int nome[265];
};

int main (void){
	union Cidadao c;
	return 0;
}
