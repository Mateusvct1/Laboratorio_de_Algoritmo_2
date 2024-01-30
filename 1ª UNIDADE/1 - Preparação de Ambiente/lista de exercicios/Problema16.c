/*Escreva a função anterior e passe como parâmetro o caractere
que deseja imprimir.*/

#include <stdio.h>

// Função para exibir um retângulo sólido com um caractere específico
void exibirRetangulo(int lado1, int lado2, char caractere) {
    if (lado1 <= 0 || lado2 <= 0) {
        printf("Os lados devem ser inteiros positivos.\n");
        return;
    }

    for (int i = 0; i < lado1; i++) {
        for (int j = 0; j < lado2; j++) {
            printf("%c ", caractere);
        }
        printf("\n");
    }
}

int main() {
    int lado1, lado2;
    char caractere;

    // Solicita ao usuário inserir os lados do retângulo e o caractere desejado
    printf("Digite os lados do retangulo (lado1 lado2): ");
    scanf("%d %d", &lado1, &lado2);

    printf("Digite o caractere desejado: ");
    scanf(" %c", &caractere);  // O espaço antes do %c evita problemas com a leitura do buffer

    // Chama a função para exibir o retângulo
    exibirRetangulo(lado1, lado2, caractere);

    return 0;
}