/*
Escreva um programa que converta temperaturas de 30 oC a 50 oC para a escala Fahrenheit espaçados de 1 oC. O programa deve imprimir uma tabela exibindo as temperaturas nas duas escalas lado a lado. [Dica: F = C + 32]
*/

#include <stdio.h>

int main (){
    float F;
    int C;
    for(C=30;C<=50;C++){
        
        F = C + 32;
        printf("_____________________________________________\n");
        printf("|%.1f Grau Fahrenheit | %d Graus Celsius|\n",F,C);

    }

    return 0;
}
