#include <stdio.h>


int main (void){

    int x, y, z;

    printf ("Me deixe adivinhar qual é o maior algorismo:\n");
    printf ("Me diga o primeiro numero:\n");
    scanf ("%d", &x);
    printf ("Me diga o segundo numero:\n");
    scanf ("%d", &y);
    printf ("Me diga o terceiro numero:\n");
    scanf ("%d", &z);

    if (x != y && x != z && y != z){
        if (x>y && x>z){
            printf("O primeiro numero, %d, eh o maior!", x);
        }else{
            if (y>x && y>z){
                printf("O segundo numero, %d, eh o maior!", y);
            }else{
                printf ("O terceiro numero, %d, eh o maior!", z);}}}

    if (x==y && x==z && y==z){
        printf("Todos sao iguais!");
    }
    if (x==y && y > z){
        printf("O maior valor eh: %d", y);
    }
    if (x==y && y<z){
        printf("O maior valor eh: %d", z);
    }
    if (x==z && x>y){
        printf("O maior valor eh: %d", x);
    }
    if (x==z && x<y){
        printf("O maior valor eh: %d", y);
    }
    if (y==z && y>x){
        printf("O maior valor eh: %d", y);
    }
    if (y==z && y<x){
        printf("O maior valor eh: %d", x);
    }

return 0;
}






