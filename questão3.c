#include <stdio.h>


int main(void){

    float notU1, notU2, notU3, intr, lab; //as variáveis de inicio "not" siginifica a nota de cada unidade, "intr" significa a matéria de introdução, "lab" laboratório.
    const float n1 = 6, n2 = 4;//as duas constantes que o problema se referiu
    double media;//preferi deixar mais preciso

    printf("Irei calcular em qual conceito voce encontra-se!\n");//introdução ao usuário + explicação

    printf("Notas da primeira unidade: introducao/laboratorio\n");//indução de resposta do usuário
    scanf ("%f%f", &intr, &lab);// leitura das duas disciplinas
    if(intr>lab){//bifurcação para saber qual das duas disciplinas o usuário teve o rendimento maior.
        notU1 = ((n1 * intr) + (n2 * lab)) / (n1+n2);//formula para calcular a nota de cada unidade.
        printf("Nota da Unidade 1: %.1f\n", notU1);//"resposta" se essa bifurcação for vverdadeira, se nao,
    }
    else{
        notU1 = ((n1 * lab) + (n2 * intr)) / (n1+n2);
        printf("Nota da Unidade 1: %.1f\n", notU1);//resposta para se essa bifurcação for verdadeira.
    }
    //daí entao irá se repetir essa mesma estrutura mais 2x, para saber as notas da segunda e da terceira unidade.
    printf("Notas da segunda unidade: introducao/laboratorio\n");
    scanf ("%f%f", &intr, &lab);

    if(intr>lab){
        notU2 = ((n1 * intr) + (n2 * lab)) / (n1+n2);
        printf("Nota da Unidade 2: %.1f\n", notU2);
    }
    else{
        notU2 = ((n1 * lab) + (n2 * intr)) / (n1+n2);
        printf("Nota da Unidade 2: %.1f\n", notU2);
    }
    printf("Notas da terceira unidade: introducao/laboratorio\n");
    scanf ("%f%f", &intr, &lab);

    if(intr>lab){
        notU3 = ((n1 * intr) + (n2 * lab)) / (n1+n2);
        printf("Nota da Unidade 3: %.1f\n", notU3);
    }
    else{
        notU3 = ((n1*lab) + (n2*intr)) / (n1+n2);
        printf("Nota da Unidade 3: %.1f\n", notU3);
    }
    //agora iremos calcular a média das tres unidades, com essa simples formula;
    media = (notU1 + notU2 + notU3) / 3;
    printf("Media: %.1lf\n\n", media);//coloca-se na tela o resultado da media para o devido problema.
    //classificação para a resposta final do conceito.
    if(media<=10 && media>=9){
        printf("Conceito A!\n");//se estiver entre 10 e 9 incluindo eles mesmos, exibirá isso
    }if(media<9 && media>=8){
        printf("Conceito B!\n");//se estiver entre 9 e 8 incluindo o 8, exibirá isso
    }if(media<8 && media>=7){
        printf("Conceito C!\n");//se estiver entre 8 e 7 incluindo o 7, exibirá isso
    }if(media<7 && media>=6){
        printf("Conceito D!\n");//se estiver entre 7 e 6 incluindo o 6, exibirá isso
    }if(media<6 && media>=5){
        printf("Conceito E!\n");//se estiver entre 6 e 5 incluindo o 5, exibirá isso
    }if (media<5){
        printf("Conceito F!\n");//se estiver menor que 5, exibirá isso
    }
return 0;
}
