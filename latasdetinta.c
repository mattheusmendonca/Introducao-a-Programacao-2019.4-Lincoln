#include <stdio.h>

int main (void){


    float altura, largura, rendimento, volume, valorx, area, rendt;



    printf ("Olah pcr, pode me ajudar a pintar a parede do meu quarto? \nIae man, posso sim!");
    puts ("\nPreciso calcular a quantidade de baldes de tinta necessariaos! \nBom, e simples...");
    puts ("\nPreciso de algumas infos:");

    printf ("Me diga a altura da sua parede em metros:\n");
    scanf("%f", &altura);

    printf ("Me diga a largura da sua parede em metros:\n");
    scanf("%f", &largura);


    area = (altura * largura);
    printf ("resultado da area(parede): %.1f", area);



    printf ("\nAgora o rendimento de cada lata de tinta(m2/l):\n");
    scanf("%f", &rendimento);

    rendt = (area / rendimento);
    printf ("resultado do  litro total: %.1f", rendt);


    printf ("\nMe diga tambem o volume em litros de determinada lata:\n");
    scanf("%f", &volume);

    valorx = (rendt / volume);
    printf ("voce ira precisar de: %.1f Latas de tinta...", valorx);








return 0;

}
