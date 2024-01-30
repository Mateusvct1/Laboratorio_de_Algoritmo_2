/* Função para inverter um número. Exemplo: f(1234) = 4321 */

#include <stdio.h>

// Função para inverter um número
int inverterNumero(int num) {
    int invertido = 0;

    while (num > 0) {
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }

    return invertido;
}

int main() {
    int numero;

    // Receber o número do usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Chamar a função para inverter o número
    int numeroInvertido = inverterNumero(numero);

    // Exibir o número invertido
    printf("O número invertido de %d é: %d\n", numero, numeroInvertido);

    return 0;
}