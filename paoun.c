#include <stdio.h>

int main(void){
    int anterior, atual;    
    int rGeral;             
    int difAtual;           
    int ehPa;               

    printf("Digite o primeiro numero: ");
    scanf("%d", &anterior);
    printf("Digite o segundo numero: ");
    scanf("%d", &atual);

    
    rGeral = atual - anterior;
    
    ehPa = 1;

    while(atual != -1){ 
        difAtual = atual - anterior;
        if (difAtual != rGeral)
            ehPa = 0;
        }

        
        anterior = atual;
        printf("Digite um novo numero: ");
        scanf("%d", &atual);
    }

    
    if (ehPa == 1){
        printf("Foi uma PA de razao %d.\n", rGeral);
    }else{
        puts("Nao foi PA.");
    }

    return 0;
}
