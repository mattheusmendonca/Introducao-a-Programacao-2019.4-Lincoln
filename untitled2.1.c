#include <stdio.h>

int main (void){
    // definir todas as variáveis, tanto de entrada tanto de saída

    float altura, pesoIdeal;
    char sexo;
    // perguntas iniciais
    printf("Voce pode me informar seu sexo: (m)asculino ou (f)eminino?\n ");
    scanf ("%c", &sexo);

    printf ("Digite sua altura em metros:\n ");
    scanf ("%f", &altura);





    if (sexo == 'm') {

        pesoIdeal = (72.7 * altura) - 58; //duvidas//
    } else {
        pesoIdeal = (62.1 * altura) - 44.7;
    }
    printf ("O peso ideal para o  %c de altura %.2f sera: %.1fkg\n", sexo, altura, pesoIdeal);




return 0;
}
