/*
Escreva um programa que imprima a soma, a soma dos quadrados e a soma dos cubos de todos os números naturais de 1 até qualquer número inserido pelo usuário.


*/
#include <stdio.h>
#include <math.h>

int main(){

    int n,i;
    int soma = 0,somaQuadrado = 0,somaCubo=0;

    printf("digite o total de numero: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        soma += i;
        int numero = pow(i,2);
        somaQuadrado += numero;
        printf("\n%d ^ 2 = %d",i,numero );
    }
    printf("\n***************************\n");
    for (i = 1; i <= n; i++)
    {
        int cubo = pow (i,3);
        somaCubo += cubo;
        printf("%d ^ 3 = %d\n",i,cubo );
    }
    printf("A soma desses %d numeros = %d \n",n,soma);
    printf("O quadrado desses %d numeros = %d \n",n,somaQuadrado);
    printf("O cubo desses %d numeros = %d \n",n,somaCubo);

    return 0;
}