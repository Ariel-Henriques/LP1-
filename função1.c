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

int main (void){
    int x;
    char l;
    printf("Digite um valor: ");
    scanf("%d", &x);
    l=eh_primo(x);
    if (l==1){
        printf ("%d é primo! \n", x);
        }
        else {
            printf("%d não é primo! \n", x);
            }
    return 0;
}   

