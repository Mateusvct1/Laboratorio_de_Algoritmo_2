/*Escreva um programa para converter e imprimir os caracteres para os valores ASCII de 0 a 127. O programa deve imprimir 10 caracteres por linha.*/

#include <stdio.h>

int main() {
    int caracteresPorLinha = 10;

    // Loop de 0 a 127
    for (int i = 0; i <= 127; i++) {
        // Imprime o caractere e seu valor ASCII
        
        printf("%c (%d)\t", (char)i, i);

        // Pula para a próxima linha após imprimir 10 caracteres
        if ((i + 1) % caracteresPorLinha == 0) {
            printf("\n");
        }
    }

    return 0;
}