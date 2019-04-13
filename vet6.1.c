#include<stdio.h>

int media(int* vec, int n){
    char i;
    float count=0;
    for(i=0; i<n; i++){
        count=count+*(vec+i);
        }
    count=count/100;
    return count;
    }
        

void preenche(int* vec, int n){
    char i;
    for(i=0; i<n; i++){
        printf("Preencha o espaço: ");
        scanf("%d", (vec+i));
        }      
       }   

int main (void){
    int vec[100]; 
    float m;
    preenche(vec, 100);
    m = media(vec, 100);
    printf("%f", m);
    return 0;
    }
