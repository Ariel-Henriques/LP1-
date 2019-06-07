#include<stdio.h>

void ler(int* v){
    for(int i=0; i<5; i++){
        printf("Numero: ");
        scanf("%d", v+i);
    }
}

void remover(int* v, int i){
    for(int j=i; j<5; j++){
        *(v+j)=*(v+j+1);
    }
    *(v+4)=0;
} 
        
void escreve(int* v){
    for(int j=0; j<5; j++){
        printf("%d\n", v[j]);
    }
}
int main (void){
    int v[5];
    ler(v);
    int i;
    printf("I: ");
    scanf("%d", &i);
    remover(v, i);
    escreve(v);
    return 0;
}
