/*Determine o dia da semana para qualquer data compreendida
entre 0 DC até 2 de março de 2022.*/

#include <stdio.h>

// Função para calcular o dia da semana usando o algoritmo de Zeller
int calcularDiaDaSemana(int dia, int mes, int ano) {
    if (mes < 3) {
        mes += 12;
        ano--;
    }

    int k = ano % 100;
    int j = ano / 100;

    int diaDaSemana = (dia + 13 * (mes + 1) / 5 + k + k / 4 + j / 4 + 5 * j) % 7;

    // O resultado da fórmula é um número de 0 (sábado) a 6 (sexta-feira)
    // Mapeamos para os dias da semana de domingo (0) a sábado (6)
    return (diaDaSemana + 5) % 7;
}

int main() {
    int dia, mes, ano;

    // Solicita ao usuário inserir a data
    printf("Digite a data (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    // Verifica se a data está no intervalo permitido
    if (ano < 0 || mes < 1 || mes > 12 || dia < 1 || dia > 31) {
        printf("Data invalida.\n");
        return 1;
    }

    // Verifica se a data está antes de 0 DC ou após 2 de março de 2022
    if (ano == 0 && mes == 1 && dia == 1) {
        printf("Data correspondente ao início da era cristã (0 DC).\n");
        return 0;
    } else if (ano == 2022 && mes > 3) {
        printf("Data posterior a 2 de março de 2022.\n");
        return 0;
    }

    // Chama a função para calcular e imprimir o dia da semana
    int diaDaSemana = calcularDiaDaSemana(dia, mes, ano);

    switch (diaDaSemana) {
        case 0:
            printf("Domingo\n");
            break;
        case 1:
            printf("Segunda-feira\n");
            break;
        case 2:
            printf("Terca-feira\n");
            break;
        case 3:
            printf("Quarta-feira\n");
            break;
        case 4:
            printf("Quinta-feira\n");
            break;
        case 5:
            printf("Sexta-feira\n");
            break;
        case 6:
            printf("Sabado\n");
            break;
    }

    return 0;
}