/*Defina uma função chamada hipotenusa que calcula o comprimento da hipotenusa 
de um triângulo retângulo quando os outros dois lados são dados. */

#include <stdio.h>
#include <math.h>

// Função para calcular o comprimento da hipotenusa
double hipotenusa(double cateto1, double cateto2) {
    return sqrt(cateto1 * cateto1 + cateto2 * cateto2);
}

int main() {
    double cateto1, cateto2;

    // Solicita ao usuário inserir os comprimentos dos catetos
    printf("Digite o comprimento do primeiro cateto: ");
    scanf("%lf", &cateto1);

    printf("Digite o comprimento do segundo cateto: ");
    scanf("%lf", &cateto2);

    // Verifica se os comprimentos dos catetos são válidos (não negativos)
    if (cateto1 < 0 || cateto2 < 0) {
        printf("Os comprimentos dos catetos devem ser não negativos.\n");
        return 1;
    }

    // Chama a função hipotenusa para calcular e imprimir o resultado
    double resultado = hipotenusa(cateto1, cateto2);
    printf("O comprimento da hipotenusa é: %.2f\n", resultado);

    return 0;
}