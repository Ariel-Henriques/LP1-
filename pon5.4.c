#include <stdio.h>

void troca(int* x, int* y){
	int k;
	k=*x;
	*x=*y;
	*y=k;
	
}
	

int main (void){
	int x=10, y=20;
	troca(&x, &y);
	printf("%d %d\n", x, y);
}


