/*6 Defina a recursivamente a Função de Ackermann A(m,n):
I. n + 1, se m = 0.
II. A(m − 1, 1), se m > 0, n = 0.
III. A(m − 1, A(m, n − 1)), se m > 0, n > 0.*/

#include <stdio.h>

int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } else if (m > 0 && n == 0) {
        return ackermann(m - 1, 1);
    } else if (m > 0 && n > 0) {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    int m, n;

    printf("Digite o valor de m: ");
    scanf("%d", &m);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Resultado da função de Ackermann para A(%d, %d): %d\n", m, n, ackermann(m, n));

    return 0;
}