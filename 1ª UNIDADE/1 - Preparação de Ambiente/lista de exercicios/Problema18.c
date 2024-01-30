/* Um número inteiro é considerado um número perfeito se seus
fatores, incluindo 1 (mas não o próprio número), somam o número. Por
exemplo, 6 é um número perfeito porque 6 = 1 + 2 + 3. Escreva uma função
isPerfect que determina se o número do parâmetro é um número perfeito.
Use esta função em um programa que determina e imprime todos os números
perfeitos entre 1 e 1000. Imprima os fatores de cada número perfeito para
confirmar que o número é realmente perfeito. */

#include <stdio.h>

// Função para verificar se um número é perfeito
int isPerfect(int num) {
    int somaFatores = 1;  // Inicializa com 1, pois todo número é divisível por 1

    // Encontra e soma os fatores do número
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            somaFatores += i;
        }
    }

    // Verifica se a soma dos fatores é igual ao número
    return somaFatores == num;
}

int main() {
    printf("Numeros perfeitos entre 1 e 1000:\n");

    // Loop para verificar e imprimir os números perfeitos
    for (int i = 1; i <= 1000; i++) {
        if (isPerfect(i)) {
            printf("%d é um número perfeito. Fatores: 1", i);

            // Imprime os fatores do número perfeito
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    printf(" + %d", j);
                }
            }

            printf("\n");
        }
    }

    return 0;
}