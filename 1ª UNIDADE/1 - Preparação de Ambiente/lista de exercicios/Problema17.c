/*Escreva uma função que considere o tempo como três argumentos inteiros (para horas, minutos e segundos) e retorne o número de
segundos desde a última vez que o relógio bateu 12. Use esta função para calcular a quantidade de tempo em segundos entre dois tempos,
 ambos dentro de um ciclo de 12 horas do relógio.*/

 #include <stdio.h>

// Função para calcular o número de segundos desde a última vez que o relógio bateu 12
int segundosDesdeMeioDia(int horas, int minutos, int segundos) {
    // Converte as horas para o formato de 24 horas
    horas = (horas % 12) + (horas >= 12 ? 12 : 0);

    // Calcula o total de segundos desde o meio-dia
    return horas * 3600 + minutos * 60 + segundos;
}

int main() {
    int horas1, minutos1, segundos1;
    int horas2, minutos2, segundos2;

    // Solicita ao usuário inserir dois tempos no formato de 12 horas
    printf("Digite o primeiro tempo (horas minutos segundos): ");
    scanf("%d %d %d", &horas1, &minutos1, &segundos1);

    printf("Digite o segundo tempo (horas minutos segundos): ");
    scanf("%d %d %d", &horas2, &minutos2, &segundos2);

    // Calcula o número de segundos entre os dois tempos
    int diferenca = segundosDesdeMeioDia(horas2, minutos2, segundos2) - segundosDesdeMeioDia(horas1, minutos1, segundos1);

    // Exibe a diferença em segundos
    printf("Diferenca em segundos: %d\n", diferenca);

    return 0;
}