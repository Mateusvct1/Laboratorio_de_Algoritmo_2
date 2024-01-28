/*
Escreva um programa que imprima a soma, a soma dos quadrados e a soma dos cubos de todos os números naturais de 1 até qualquer número inserido pelo usuário.


*/
#include <stdio.h>
#include <math.h>

int main(){

    int n,i;
    double soma = 0,somaQuadrado = 0,somaCubo=0;

    printf("digite o total de numero: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        soma += i;
        double numero = pow(i,2);
        somaQuadrado += numero;
        printf("\n%d ^ 2 = %.1lf",i,numero );
    }
    printf("\n***************************\n");
    for (i = 1; i <= n; i++)
    {
        double cubo = pow (i,3);
        somaCubo += cubo;
        printf("\n%d ^ 3 = %.1lf",i,cubo );
    }
    printf("\nA soma desses %d numeros = %.1lf \n",n,soma);
    printf("\nO quadrado desses %d numeros = %.1lf \n",n,somaQuadrado);
    printf("O cubo desses %d numeros = %.1lf \n",n,somaCubo);

    return 0;
}