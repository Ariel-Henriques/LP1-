#include <stdio.h>

int main (void){
    char nota[50];   
    int i, qtda;
    float media;    
    media=0;
    qtda=0;    
    for (i=1; i<=50; i++){        
        printf("Nota: ");
        scanf("%hhd", &nota[i]);   
        media=media+nota[i];             
    }
    media=media/3;
    printf("%f\n", media);
    i=1;
    while (i<=50){
        if (nota[i]>media){
            qtda=qtda+1;     
            }
        i=i+1;
        }
    printf("%d\n", qtda);
    return 0;
}
        
    
