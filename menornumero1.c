#include <stdio.h>

int main (void){
    float x, y;

    printf ("Posso descobrir qual o menor numero que voce digitou?\n\n");
    printf ("Me diga o primeiro numero:\n");
    scanf ("%f", &x);
    printf ("Me diga o segundo numero:\n");
    scanf ("%f", &y);

    if (x == y){
        printf ("os valores sao iguais!");
        return 0;
    }

    if (x > y){
        printf ("O valor %.1f eh o maior!", x);
    }else{
        printf ("O valor %.1f eh o maior!", y);
    }
    return 1;
}
