#include <stdio.h>

int main(void){
    int n;                  
    int ant1, ant2, atual;  
    int i;                  


    
    printf("Digite o n: ");
    scanf("%d", &n);

    printf("Os %d primeiros termos da sequencia de Fibonacci sao: ", n);

    
    for (i = 1; i <= n; i = i + 1){
       
        if (i == 1 || i == 2){
            
            atual = 1;
        }else{
            
            atual = ant2 + ant1;
        }

        
        if (i > 1 && i != n){
            printf(", "); 
        }
        
        if (i == n && n > 1){
            printf(" e "); 
        }

        
        printf("%d", atual);
        ant2 = ant1;
        ant1 = atual;
    }
    printf(".\n"); 

    return 0;
}
