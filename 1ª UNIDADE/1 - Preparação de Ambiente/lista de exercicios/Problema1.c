/*
Escreva um programa para somar uma sequência de inteiros e calcular sua média. Suponha que o primeiro inteiro lido com scanf especifique o número de valores a serem inseridos. Seu programa deve ler apenas um valor cada vez que scanf é executado. Uma sequência de entrada típica pode ser:
7 678 234 315 489 536 456 367

*/
#include <stdio.h>

int main(){
    float n,valor,soma=0,media;
    

    printf("informe a quantidade de valores do vetor\n");
    scanf("%f",&n);

    int i;
    for(i=0;i<n;i++){
        printf("Digite o %d elemento\n", i+1);
        scanf("%f",&valor);
        soma += valor;
    }
    media = soma/n;
    printf("A soma: %.1f\n",soma);
    printf("A média: %.1f\n",media);

    return 0;
}