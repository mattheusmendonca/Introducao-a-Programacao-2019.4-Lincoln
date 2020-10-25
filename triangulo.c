#include <stdio.h>
#include <math.h>

int main (void) {
    int b, h;
    float area;

    printf ("Digite a base do triangulo:\n");
    scanf ("%d", &b);

    printf ("Digite a altura do triangulo:\n");
    scanf ("%d", &h);

    area = (b * h) / (2) ;

    printf ("A area do triangulo de base %d e altura %d eh: %.1f\n", b, h, area);
    return 0;
}
