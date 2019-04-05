#include <stdio.h>

int main (void){
    int a, b;
    int* p;
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("%d, %d \n", a, b);
    if(a>b){
        p=&a;
        }
        else{
            p=&b;
            }
    *p=*p-50;
    printf("A:%d, B:%d \n", a, b);
    return 0;
}
