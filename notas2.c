#include <stdio.h>

int main (void){
    int  valor, nota1, nota2, nota5, nota10, nota20, nota50, nota100;
    printf("Hello, me deixe administrar seu dinheiro?\n");
    printf("Me informe um valor:\n");
    scanf ("%d", &valor);


    if (valor <= 100){
        nota100 = valor/100;
        printf("A quantidade de cedulas de 100 eh: %d", nota100);
        valor = valor%100;
    }

    if (valor < 100 && valor >=50){
            nota50 = valor/50;
        printf("A quantidade de cedulas de 50 eh: %d", nota50);
    valor = valor%100;
    }
    if (valor < 50 && valor >= 20){
        nota20 = valor/20;
        printf("A quantidade de cedulas de 20 eh: %d", nota20);
        valor = valor%20;
    }
    if (valor <20 && valor >=10){
        nota10 = valor/10;
        printf("A quantidade de cedulas de 10 eh: %d", nota10);
        valor = valor%10;
    }
    if(valor<10 && valor >=5){
        nota5 = valor/5;
        printf("A quantidade de cedulas de 5 eh: %d", nota5);
        valor = valor%5;
    }
    if (valor <5 && valor >=2){
        nota2 = valor/2;
        printf("A quantidade de cedulas de 2 eh: %d", nota2);
        valor = valor%2;
    }
    if(valor <2 && valor >=1){
        nota1 = valor/1;
        printf("A quantidade de cedulas de 1 eh: %d", nota1);
        valor = valor%1;
    }


return 0;
}
