/*Escreva um programa que imprima uma tabela de todos os
equivalentes de algarismos romanos dos números decimais no intervalo de 1
a 100. */

#include <stdio.h>

// Função para converter um número decimal para algarismo romano
void converterParaRomano(int numero) {
    // Arrays para os algarismos romanos e seus equivalentes decimais
    int valoresDecimais[] = {100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* algarismosRomanos[] = {"C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    printf("%3d: ", numero);

    // Loop para converter o número para algarismo romano
    for (int i = 0; i < 9; i++) {
        while (numero >= valoresDecimais[i]) {
            printf("%s", algarismosRomanos[i]);
            numero -= valoresDecimais[i];
        }
    }

    printf("\n");
}

int main() {
    printf("Tabela de equivalentes de algarismos romanos para numeros decimais de 1 a 100:\n");

    // Loop para imprimir a tabela
    for (int i = 1; i <= 100; i++) {
        converterParaRomano(i);
    }

    return 0;
}