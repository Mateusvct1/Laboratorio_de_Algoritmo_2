/*Apresente o resultado com um programa em C com os valores, lado a lado, da quantidade de temos
utilizado e da aproximação do valor de π.*/

#include <stdio.h>

int main() {
    int quantidadeTermos;
    double piAproximado = 0.0;

    // Solicita ao usuário inserir a quantidade de termos
    printf("Digite a quantidade de termos para calcular a aproximacao de pi: ");
    scanf("%d", &quantidadeTermos);

    // Loop para calcular a série infinita
    for (int i = 0; i < quantidadeTermos; i++) {
        double termo = 1.0 / (2 * i + 1);

        // Alterna sinal a cada termo
        if (i % 2 == 0) {
            piAproximado += termo;
        } else {
            piAproximado -= termo;
        }
    }

    // Multiplica o resultado por 4 para obter a aproximação de pi
    piAproximado *= 4;

    // Imprime o número de termos e a aproximação de pi
    printf("\nNumero de termos: %d\n", quantidadeTermos);
    printf("Aproximacao de pi: %.15f\n", piAproximado);

    return 0;
}