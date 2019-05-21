#include<stdio.h>

int fib(int n){
//Numero da posição n na série de fibonacci
	if(n<=1){
		return 1;
	}else{
		return fib(n-1)+fib(n-2);
	}
}

int main (void){
	int i=5;
	printf("%d", fib(i));
}
