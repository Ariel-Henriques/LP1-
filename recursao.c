#include<stdio.h>

int recursao(int n){
	int k;
	if(n==0){
		return 1;
	}else{
		k=recursao(n-1)+1;
	}
}

int main (void){
	int i=5;
	printf("n+1 = %d", recursao(i));
	return 0;
}
