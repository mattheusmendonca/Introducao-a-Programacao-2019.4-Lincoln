#include <stdio.h>

int main (void){

    const float pi = 3.14;
    float diametro, raio, area, perimetro;

    printf("Me deixe calcular o raio, a area e o perimetro de um circulo pra você?\n\n");
    printf ("Digite o diametro da sua circunferencia:\n\n");
    scanf ("%f", &diametro);

    raio = diametro / 2;
    area = pi * raio * raio;
    perimetro = pi * diametro;

    printf ("\nDiametro %.1f:\n", diametro);
    printf ("Raio: %.2f\n", raio);
    printf ("Area: %.1f\n", area);
    printf ("Perimetro: %.1f\n", perimetro);
    return 0;
}
