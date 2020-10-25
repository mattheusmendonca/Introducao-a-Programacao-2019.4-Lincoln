#include <stdio.h>
#include <math.h>
int main (void){
    int x, y, z;
    float soma, produto, media;

    printf ("Me informe o valor de x:\n");
    scanf("%d", &x);
    printf ("Me informe o valor de y:\n");
    scanf("%d", &y);
    printf ("Me informe o valor de z:\n");
    scanf("%d", &z);

    soma = x + y + z;
    produto = x * y * z;
    media = (x + y + z) / (3);

    printf ("O resultado da soma, do produto e da media de %d, %d, %d eh:\n%.1f, %.1f e %.1f", x, y, z, soma, produto, media);




return 0;
}

