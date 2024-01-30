/*Defina uma função recursiva que, dado os valores inteiros de
x1 e x2, determine y = x1x2. */
#include <stdio.h>

// Função recursiva para calcular o produto x1 * x2
int calcularProduto(int x1, int x2) {
    // Caso base: se x2 for 0, o produto é 0
    if (x2 == 0) {
        return 0;
    } else {
        // Caso contrário, some x1 ao produto de x1 e x2-1
        return x1 + calcularProduto(x1, x2 - 1);
    }
}

int main() {
    int x1, x2;

    // Receber os valores de x1 e x2 do usuário
    printf("Digite o valor de x1: ");
    scanf("%d", &x1);

    printf("Digite o valor de x2: ");
    scanf("%d", &x2);

    // Calcular o produto chamando a função recursiva
    int resultado = calcularProduto(x1, x2);

    // Exibir o resultado
    printf("O produto de %d e %d é: %d\n", x1, x2, resultado);

    return 0;
}