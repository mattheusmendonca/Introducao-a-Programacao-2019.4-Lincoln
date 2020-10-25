#include <stdio.h>
int main (void){
    int a, b;
    printf("Digite um numero positivo:\n");
    scanf("%d", &a);
    printf("Voce digitou: %d\n", a);
    printf("Digite outro numero(maior que o anterior):\n");
    scanf("%d", &b);
    printf("Voce digitou: %d\n", b);
    printf ("Esse eh o intervalo:\n");
        for (a = a; a <=b; a = a +1){
        printf("%d\n", a);
        }
return 0;
}
