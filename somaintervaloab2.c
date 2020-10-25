#include <stdio.h>
#include <locale.h>

int main (void){
      setlocale(LC_ALL, "portuguese-brazilian");
    int  c, a, b, soma;
    c = 0;
      a=-1;
      b=-1;
    while((a>b) || ((a < 0 || b < 0) || a == b )){
    printf(" Digite o nÃºmero 'a': \n");   
    scanf("%d", &a);
    printf(" ----O nÃºmero 'a' Ã©: %d----\n", a);   
    printf(" Digite o nÃºmero 'b': \n");    
    scanf("%d", &b);
    printf(" ----O nÃºmero 'b' Ã©: %d----\n", b); 
    if(a > b){/*Caso a maior que b, faÃ§o a troca entre o valor de a e b*/
    printf("\nO nÃºmero 'a' Ã© menor que 'b', farei a troca\n\n");
    c = a;
    a = b;
    b = c;
    }
    if( a<0 || b<0 || a == b){/*Caso a menor quue 0 ou b menor que 0 ou a igual a b, faÃ§o isso*/ 
    printf("\nVocÃª digitou nÃºmeros negativos ou iguais, digite novamente\n\n"); 
    }
    }
    c=a;
    soma=0;
    printf("Mostrarei os nÃºmeros entre 'a' e 'b' e a soma entre eles:\n");
   for(a == a; a<=b; a++){
        printf("%d\n", a);
        soma = soma + a;
     }
    printf("A soma entre %d e '%d' eh: %d\n", c, b, soma);/*Note que 'c' Ã© igual ao 'a' do 'while' e nÃ£o do 'for'*/

return 0;
}
