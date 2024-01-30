/* Somatório de valores de 1 até N. */
#include <stdio.h>

// Função para calcular o somatório de 1 até N
int calcularSomatorio(int N) {
    int somatorio = 0;

    for (int i = 1; i <= N; i++) {
        somatorio += i;
    }

    return somatorio;
}

int main() {
    int N;

    // Receber o valor de N do usuário
    printf("Digite um valor inteiro N: ");
    scanf("%d", &N);

    // Calcular o somatório chamando a função
    int resultado = calcularSomatorio(N);

    // Exibir o resultado
    printf("O somatório de 1 até %d é: %d\n", N, resultado);

    return 0;
}