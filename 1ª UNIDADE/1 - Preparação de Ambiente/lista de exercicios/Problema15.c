/*Escreva uma função que exibe um retângulo sólido de asteriscos cujos lados são especificados nos parâmetros inteiros lado1 e lado2. Por
exemplo, se os lados são 4 e 5.*/

#include <stdio.h>

// Função para exibir um retângulo sólido de asteriscos
void exibirRetangulo(int lado1, int lado2) {
    if (lado1 <= 0 || lado2 <= 0) {
        printf("Os lados devem ser inteiros positivos.\n");
        return;
    }

    for (int i = 0; i < lado1; i++) {
        for (int j = 0; j < lado2; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int lado1, lado2;

    // Solicita ao usuário inserir os lados do retângulo
    printf("Digite os lados do retangulo (lado1 lado2): ");
    scanf("%d %d", &lado1, &lado2);

    // Chama a função para exibir o retângulo
    exibirRetangulo(lado1, lado2);

    return 0;
}