#include <stdio.h>
#include <math.h>

int main (void){
    float a, b , c;//coeficientes da equação
    float delta, x1, x2;

    printf ("Digite o coeficiente a:\n ");
    scanf ("%f", &a);

    printf ("Digite o coeficiente b: \n");
    scanf ("%f", &b);

    printf ("Digite o coeficiente c: \n");
    scanf ("%f", &c);

    if ( a == 0 ){
        printf ("Os coeficientes nao formam uma equacao do 2 grau!\n");
        return 1; //se encerrar aqui é pq n forma coeficientes de 2 grau
    }
    delta = b*b - 4*a*c;
    if ( delta < 0){
        printf ("A equacao nao possui raizes reais");
        return 2; // se encerrar aqui é pq o valor de delta é menor que zero

    }
    x1 = (-b + sqrt(delta)) / (2*a); // sqrt= codigo de raiz dentro da biblioteca math // colocou os () por que se nao, n incluia toda a expressão
    x2 = (-b - sqrt(delta)) / (2*a);

    printf("\nX1 = %.1f, X2 = %.1f\n", x1, x2);


return 0; // se encerrou aqui, é porque deu tudo certo
}


