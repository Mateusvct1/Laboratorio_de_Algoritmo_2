/*Escreva dois programas que recebem como parâmetro três
inteiros representando os coeficientes de uma função do segundo grau e execute:
a) O teste para saber se essa função tem raízes reais;
b) O valor das raízes reais.*/

#include <stdio.h>
#include <math.h>

// Função para testar se a função do segundo grau tem raízes reais
int temRaizesReais(int a, int b, int c) {
    int discriminante = b*b - 4*a*c;
    return discriminante >= 0;
}

// Função para calcular e exibir as raízes reais da função do segundo grau
void calcularRaizesReais(int a, int b, int c) {
    int discriminante = b*b - 4*a*c;

    // Verifica se a função tem raízes reais
    if (discriminante >= 0) {
        // Calcula as raízes reais
        double raiz1 = (-b + sqrt(discriminante)) / (2.0 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2.0 * a);

        // Exibe as raízes reais
        printf("Raizes reais: %.2f e %.2f\n", raiz1, raiz2);
    } else {
        printf("A funcao do segundo grau nao tem raizes reais.\n");
    }
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s <a> <b> <c>\n", argv[0]);
        return 1;
    }

    int a, b, c;
    sscanf(argv[1], "%d", &a);
    sscanf(argv[2], "%d", &b);
    sscanf(argv[3], "%d", &c);

    // Testa se a função tem raízes reais
    if (temRaizesReais(a, b, c)) {
        printf("A funcao do segundo grau tem raizes reais.\n");

        // Calcula e exibe as raízes reais
        calcularRaizesReais(a, b, c);
    } else {
        printf("A funcao do segundo grau nao tem raizes reais.\n");
    }

    return 0;
}