/*
Escreva um programa para calcular e imprimir uma lista de todos os números primos de 1 a 100.
*/

/*
Números primos: Divisivel por 1 e por ele mesmo somente
Números de divisores é 2!
*/

#include <stdio.h>

int main()
{

    int i, j, ehprimo;
    printf("numero primos de 1 a 100\n");

    for (i = 2; i <= 100; i++)
    {
        ehprimo = 1; // antes da verificação, cria uma variável definida com 1(verdadeiro)
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                ehprimo = 0; // se i/j tiver resto zero, significa que não é primo, a variavel ehprimo vai receber zero, então não vai imprimir o valor de "i".
                break;
            }
        }
        if (ehprimo == 1)
        {
            printf("%d ", i); // quando a variável "ehprimo" receber 1 vai imprimir o valor
        }
    }

    return 0;
}


/*
#include <stdio.h>

int ehPrimo(int num, int i) {
    if(i == 1) {
        return 1;
    } else {
       if(num % i == 0) {
         return 0;
       } else {
         return ehPrimo(num, i - 1);
       }  
    }
}

void geraPrimos(int num) {
    if(num <= 100) {
        if(ehPrimo(num, num / 2) == 1) {
            printf("%d ", num);
        }
        geraPrimos(num + 1);
    }
}

int main() {
    printf("Números primos de 1 a 100:\n");
    geraPrimos(2);
    return 0;
}

*/