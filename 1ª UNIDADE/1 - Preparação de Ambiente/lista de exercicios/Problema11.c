/*Um triângulo retângulo pode ter lados inteiros. O conjunto
de três valores inteiros para os lados de um triângulo retângulo é chamado
de triplo pitagórico. Esses três lados devem satisfazer a relação de que a
soma dos quadrados de dois dos lados é igual ao quadrado da hipotenusa.
Encontre todos os triplos pitagóricos para cateto1, cateto2 e a hipotenusa,
todos com até o valor de n, indicado como parâmetro*/

#include <stdio.h>

void encontrarTriplosPitagoricos(int n) {
    printf("Triplos pitagoricos para catetos e hipotenusa menores ou iguais a %d:\n", n);
    printf("Cateto1\tCateto2\tHipotenusa\n");

    for (int cateto1 = 1; cateto1 <= n; cateto1++) {
        for (int cateto2 = cateto1; cateto2 <= n; cateto2++) {
            for (int hipotenusa = cateto2; hipotenusa <= n; hipotenusa++) {
                // Verifica se é um triplo pitagórico
                if (cateto1 * cateto1 + cateto2 * cateto2 == hipotenusa * hipotenusa) {
                    printf("%d\t%d\t%d\n", cateto1, cateto2, hipotenusa);
                }
            }
        }
    }
}

int main() {
    int limite;

    // Solicita ao usuário inserir o valor limite
    printf("Digite o valor limite para os catetos e a hipotenusa: ");
    scanf("%d", &limite);

    // Chama a função para encontrar triplos pitagóricos
    encontrarTriplosPitagoricos(limite);

    return 0;
}