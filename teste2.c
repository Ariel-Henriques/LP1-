#include <stdio.h>

int main (void){
    int n1, n2, n3;
    printf("Numero 1: ");
    scanf("%d", &n1);
    printf("Numero 2: ");
    scanf("%d", &n2);
    if (n1>n2){
        n3=n1;
        n1=n2;
        n2=n3;
        }    
    while (n1<=n2){        
        if (n2%2==0){
            printf("%d \n", n2);
        }
        n2=n2-1;
    }
    return 0;
} 
        
    
