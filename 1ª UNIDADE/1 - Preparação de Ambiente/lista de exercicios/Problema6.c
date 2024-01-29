/*
A função fatorial é freqüentemente usada em problemas de probabilidade. O fatorial é igual ao produto dos inteiros positivos de 1 a n. Escreva um programa que avalie os fatoriais dos inteiros de 1 a n. Imprima os resultados em formato tabular.

*/

#include <stdio.h>

int fatorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }

    return n * fatorial(n-1);


}

int main(){

    int n,i;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d",&n);
    printf("\n");
    printf("|--------|--------- |\n");
    printf("|numero  | Fatorial |\n");
    printf("|--------|--------- |\n");

     for ( i = 1; i <= n; i++) {
        printf("|   %d    |    %d\n", i, fatorial(i));
    }

    return 0;

}
