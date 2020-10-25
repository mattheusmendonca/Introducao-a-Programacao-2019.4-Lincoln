#include <stdio.h>
#include <locale.h>

int main (void){
    int base, expoente, potencia;

    printf("Irei calcular uma potencia pra voce!");
    printf("Digite um numero equivalente a base:");
    scanf("%d", &base);
    printf("Digite outro numero equivalente ao expoente:");
    scanf("%d", &expoente);
    printf("Sua base e seu expoente foram, respectivamente,: %d, %d!", base, expoente);

    potencia = 1;
    for (base=base; base !=0; base**){
        potencia=potencia * base;

    }
    printf ("O resultado eh: %d", potencia);

    return 0;
}
