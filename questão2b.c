
#include <stdio.h>
int main(void){

    char letra, letra2;//a primeira variável letra, representa as letras do alfabeto
    // a segunda variável, é uma variável pra somar quando converter as vogais pra minuscula. 

    letra = 64;//a primeira letra = 64, que é a mesma coisa de "A"
    //usei o do while por opção 
    do{
    letra++;//todas as vezes que rodar o corpo do laço vai somar a o caracter respectivo da letra.
       if(letra == 65 ||  letra == 69 || letra == 73 || letra == 79  letra == 85){//criei uma condição para quando o programa ler as vogais maiusculas, somar 32, que é o valor respectivo da diferença entre as maiusculas e as minusculas.
            letra2 = letra + 32;//criei a variável, como dito acima para guardar a soma.
            printf("%c",letra2);//quando a condição for verdade e entrar nessa bifrucação, irá printar letra2, que é uma vogal maiuscula + a diferença entre as duas.
       }else{
            printf("%c", letra);//se não vai printar as conssoantes maiusculas normalmente.
       }
    }while(letra <= 89);//condição de parada= Z, Z = 89 em dec(decimal).

    return 0;
}