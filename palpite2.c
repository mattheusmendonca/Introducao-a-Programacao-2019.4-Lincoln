#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, numeroCorreto, contador;
    srand(time(NULL));
    numeroCorreto = rand() % 100;
	puts("Bem-vindo!");
    puts("Adivinhe o numero:");
	scanf("%d", &palpite);
    contador = 0;
    while(palpite != numeroCorreto){
        if (palpite > numeroCorreto){
            puts("Palpite alto!");
        }else{
            puts("Palpite foi baixo!");
        }
        contador=contador + 1;
        printf("Voce perdeu %d chance(s)!\n", contador);
        printf("Digite seu novo palpite: ");
        scanf("%d", &palpite);
        if(contador == 5 && palpite != numeroCorreto){
            puts("Voce perdeu!");
            printf("Voce palpitou %d vezes!\n", contador);
            puts("Fim do jogo.");
        }
        }
    puts("Voce ganhou!");
    printf("Voce palpitou %d vezes!\n", contador);
    puts("Fim do jogo.");
    return 0;
}
