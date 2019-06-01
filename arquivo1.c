#include<stdio.h>
#include<string.h>

void preenche(FILE* f){
    char a[25];    
    printf("Digite algo: ");
    scanf("%s", a);
    int b=strlen(a);
    printf("%s", a);    
    for(int i=0; i<b; i++){  
         //printf("%s", a);
         fputc(a[i], f);
    }
}

int main (void){
    FILE* f= fopen("/home/ime/Área de Trabalho/arq.jota.txt", "w");
    preenche(f);      
    fclose(f);
    return 0;
}
    
    
