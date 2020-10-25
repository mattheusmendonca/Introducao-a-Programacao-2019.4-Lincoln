#include <stdio.h>

int main (void){

    float nota1, nota2, nota3, media;

    printf ("Olah Linconl, pode me ajudar a resolver essa questao? \nIae Matheus, posso sim!");
    puts ("\nPreciso calcular a media de 3 numeros, professor! \nBom Matheus, e simples... (explicacao)");
    puts ("\nExxemplo:");

    printf ("Me diga o primeiro numero:\n");
    scanf("%f", &nota1);


    printf ("Me diga agr o segundo numero:\n");
    scanf("%f", &nota2);


    printf ("Me passe agr o ultimo numero:\n");
    scanf("%f", &nota3);



    media = (nota1 + nota2 + nota3) / 3;

    printf("\nAgora vamos para o resultado: %.1f", media);





return 0;

}
