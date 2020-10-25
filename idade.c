#include <stdio.h>

int main (void){
    int idade;

    printf("Digite sua idade: \n");
    scanf ("%d", &idade);



   if ( 0 <= idade && idade < 21){
        puts ("voce eh jovem!");
    }else if ( 21 <= idade && idade < 60){
        puts ("voce eh adulto!");

    }else{
        puts ("voce eh idoso!");
    }

return 0;
}

