#include<stdio.h>

float media(int a[],int n){
//retorna media
	if(n<0){
		printf("ERRO");
	}else{
		if(n==0){	
			return *(a+n);
		}else{
				float k=(a[n]/(n+1));
				//printf("%f\n", k);				
				return (media(a, n-1)*n/(n+1)+k);			
		}
	}	
}

int main (void){
	int g[]={1,2,3};
	int t = 3;
	printf("Media: %f\n", media(g, t-1));
	return 0;
}
