#include <stdio.h>
#include <math.h>

int main(){

    int n,i;
    double somaQuadrado = 0;//somaCubo=0;

    printf("digite o total de numero: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++){

        double numero = pow(i,2);
        somaQuadrado += numero;
        printf("\n%d ^ 2 = %.1lf",i,numero );
    }
    printf("O quadrado desses %d numeros = %.1lf \n",n,somaQuadrado);

    return 0;
}