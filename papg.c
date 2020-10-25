#include <stdio.h>
#include <math.h>

int main (void){
    char resp;
    float tf, t1,  r, soma;
    int n, i;
    
    printf("Voce quer calcular uma P[a] ou uma P[g]?");
    scanf("%c", &resp);
    printf("Qual o primeiro termo?");
    scanf ("%f", &t1);
    printf("Qual eh a razao?");
    scanf ("%f", &r);
    printf ("Qual o numero de termos?");
    scanf ("%d", &n);
    
        if (resp == 'a'){
            //pa= tf= t1+n-1*r
            soma= 0;
            for (i = 1; i<=n ; i++) {
                tf= t1+(i-1)*r;
                printf("\nO %d eh = %.1f", i, tf);
                soma = soma + tf;
            }printf("\nA soma entre os termos eh: %.f", soma);
            
        } 
        if (resp == 'g'){
            //pg = tf=t1*(r)^n-1
            soma= 0;
            for(i = 1; i <= n; i++){
                tf = t1*pow(r, i-1);
                printf("\nO %d eh - %.1f", i, tf);
                soma = soma + tf;
            }printf("\nA soma entre os termos eh: %.f", soma);
        }
return 0;
}
    
 
