#include <stdio.h>

int eh_primo(int x){
    int i;
    char l;
    for (i=2; i<x; i++){
        if (x%i==0){
            return 0;
            }
        }
    l=1;
    return l;
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

