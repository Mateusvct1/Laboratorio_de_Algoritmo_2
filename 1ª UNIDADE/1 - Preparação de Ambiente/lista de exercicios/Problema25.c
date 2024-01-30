/*5 Implemente a seguinte função matemática f(m, n) definida
por partes:
I. f(m, n) = m + 1, se n = 1.
II. f(m, n) = n + 1, se m = 1.
III. f(m, n) = f(m, n − 1) + f(m − 1, n), se m > 1, n > 1.*/

#include <stdio.h>

// Função recursiva para calcular f(m, n)
int calcularF(int m, int n) {
    if (n == 1) {
        return m + 1;
    } else if (m == 1) {
        return n + 1;
    } else {
        return calcularF(m, n - 1) + calcularF(m - 1, n);
    }
}

int main() {
    int m, n;

    // Receber valores de m e n do usuário
    printf("Digite o valor de m: ");
    scanf("%d", &m);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Calcular f(m, n) chamando a função
    int resultado = calcularF(m, n);

    // Exibir o resultado
    printf("O resultado de f(%d, %d) é: %d\n", m, n, resultado);

    return 0;
}