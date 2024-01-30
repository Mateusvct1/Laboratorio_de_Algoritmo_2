/*Escreva uma função que receba um inteiro e retorne a soma
de seus dígitos. Por exemplo, dado o número 7631, a função deve retornar
17. */

#include <stdio.h>

// Função para calcular a soma dos dígitos de um número inteiro
int somaDosDigitos(int numero) {
    int soma = 0;

    // Loop para iterar sobre cada dígito do número
    while (numero != 0) {
        // Adiciona o dígito à soma
        soma += numero % 10;

        // Remove o último dígito do número
        numero /= 10;
    }

    return soma;
}

int main() {
    int numero;

    // Solicita ao usuário inserir um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Chama a função para calcular a soma dos dígitos e imprime o resultado
    int resultado = somaDosDigitos(numero);
    printf("A soma dos digitos de %d eh: %d\n", numero, resultado);

    return 0;
}