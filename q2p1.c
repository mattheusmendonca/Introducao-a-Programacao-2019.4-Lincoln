
#include <stdio.h>
int main(void){

    char letra, letra2;

    letra = 64;
    do{
       letra++;
       if(letra == 65 || letra == 69 || letra == 73 || letra == 79 || letra == 85){
        letra2 = letra + 32;
        printf("%c",letra2);
       }else{
       printf("%c", letra);
       }

    }while(letra <= 89);

return 0;
    }

//}
/*for(letra = 65 ; letra <= 90 ; letra++){
         if()



    }*/
