#include <stdio.h>

int main (void){
    int qc, resto, i, n;
    inicio:
    printf("Digite um numero natural maior que 0:");
    scanf("%d", &n);

    if (n<=0){
        printf("Voce digitou um numero negativo ou zero :(");
        goto inicio;
    }
    else{
        qc=0;
        for (i = 1; i<=n ; i++){
        resto = n % i;
            if(resto == 0){
                qc = qc + 1;
                    if(qc == 2){
                        printf("O numero eh primo!");
            }
                    if(qc > 2){
                        printf("O numero nao eh primo!");
            }
        }   
        }
    }
return 0;
}
