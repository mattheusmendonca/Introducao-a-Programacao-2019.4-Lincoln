#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (void){
    float peso, altura, imc;

    printf("Calcule seu indice de massa corporal!\n");
    printf("Me informe seu peso em kg:\n");
    scanf("%f",&peso);
    printf ("Me informe agora sua altura em metros:\n");
    scanf("%f", &altura);

    imc = peso/pow(altura,2);
    printf ("Seu imc eh de: %.1f\n", imc);
    if (imc <=18.5){
        printf("Baixo peso!");
    }
    if (18.5>imc && imc<=25){
        printf("Peso normal!");
    }
    if (25>imc&&imc<=30){
        printf("Sobrepeso!");
    }
    if (imc > 30){
        printf("Obesidade!");
    }

return 0;
}
