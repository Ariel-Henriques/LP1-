#include<stdio.h>

int compra(int* conta, int valor){
     *conta=*conta-valor;
     return 0;
     }
     
int main (void){
    int minha_conta;
    int* conta;
    int c1, c2;
    printf("Saldo conta 1: ");
    scanf("%d", &minha_conta);
    c1=minha_conta;
    printf("Saldo conta 2: ");
    scanf("%d", &minha_conta);
    c2=minha_conta;
    if(c1>c2){
        conta=&c1;
        }
        else{
            conta=&c2;
            } 
    compra(conta, 500);          
    printf("Conta 1: %d \nConta 2: %d \n", c1, c2);
    return 0;
 }
