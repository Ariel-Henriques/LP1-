#include <stdio.h>


int eh_primo(int x){
    int i;
    for (i=2; i<x; i++){
        if (x%i==0){
            return 0;
            }
        }
    return 1;
}

void todos_os_primos(int n){
	int i;
	for(i=2; i<n; i++){
		if(eh_primo(i)==1){
			printf("%d \n", i);
			}
			else{
				//Não é primo
				}
		}
}		

int main (void){
	int max;
	printf("Digite o valor max: ");
	scanf("%d", &max);
	todos_os_primos(max);
	return 0;
}
