#include <stdio.h>
int main(void){

    char letra;//A variável é uma letra
//Irei usar o for por ser mais prático
    for(letra = 'a'; letra <= 'z'; letra++){
//a cada rodagem do corpo vai mostrar o caractere que ta armazenado dentro da variável letra
//ta presente na tabela: ASCII table, cada letra minúscula representa um numero
//no entanto, sempre a proxima letra vai ser igual ao próximo numero, e assim sucessivamente.
        printf("%c", letra);
    }
return 0;
}