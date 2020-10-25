#include <stdio.h>

int main (void) {
    int s;
    s = -1;
    while (s != 2020){
        printf ("Digite a senha [4dg] : \n");
        scanf ("%d", &s);
        if((s>2020)||(s<2020)){
            puts("Senha invalida!");
            printf("Digite novamente a senha:\n");
            scanf ("%d", &s);}
    } puts ("Acesso permitido!");
return 0;
}
