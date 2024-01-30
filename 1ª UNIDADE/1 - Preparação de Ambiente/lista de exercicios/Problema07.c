/*
Uma aplicação interessante de computadores é desenhar gráficos e gráficos de barras. Escreva um programa que leia cinco números (cada um entre 1 e 30). Para cada número lido, seu programa deve imprimir uma linha contendo aquele número de asteriscos adjacentes. Por exemplo, se seu programa lê o número sete, ele deve imprimir ∗∗∗∗∗∗∗.

*/

#include <stdio.h>


int main(){
    int num[5],i,j;

    for (i = 0; i < 5; i++){
        do{
            printf(" numero %d: ", i+1);
        scanf("%d",&num[i]);

        if(num[i] < 1 || num[i] > 30){
            printf("ERRO! Digite um valor de 1 a 30");
        }
     }while (num[i] < 1 || num[i] > 30);
              
        
        }
     for (i = 0; i < 5; i++) {
        for ( j = 0; j < num[i]; j++) {
            printf("* ");
        }
        printf("\n");
    }
   

    return 0;

}