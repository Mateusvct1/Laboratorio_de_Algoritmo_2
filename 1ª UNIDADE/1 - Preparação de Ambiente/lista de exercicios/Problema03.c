/*
Escreva um programa para calcular e imprimir a soma de todos os múltiplos de 7 partindo de 1 até 100.
*/

#include <stdio.h>

int main()
{

    int soma = 0, i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 7 == 0)
        {

            soma += i;
        }
    }
    printf(" A soma dos numeros multiplos de 7: %d\n", soma);

    return 0;
}