/*
Um varejista online vende cinco produtos diferentes, cujos preços de varejo são mostrados na tabela a seguir:

Número do produto | Preço no varejo
        1         |     3,00
        2         |     4,00
        3         |     2,80
        4         |     1,95
        5         |     5,00

Escreva um programa que leia uma série de pares de números da seguinte forma: Número do produto e Quantidade vendida por um dia. Seu programa deve usar uma instrução switch para ajudar a determinar o preço de varejo de cada produto. Seu programa deve calcular e exibir o valor total de varejo de todos os produtos vendidos na semana passada.

*/

#include <stdio.h>


int main(){

 int numeroProduto, quantidadeVendida;
    double valorTotalVarejo = 0.0;

    printf(" NUMERO || PRODUTO  \n");
    printf(" - 34   -- Maça verde \n");
    printf(" - 35   -- Mamao \n");
    printf(" - 36   -- uva \n");
    printf(" - 37   -- Banana \n");
    
    printf("Informe os pares de numeros (Numero do produto e Quantidade vendida por dia):\n");
    printf("Digite 0 0 para encerrar.\n");

    while (1) {
        printf("Numero do produto (ou 0 0 para encerrar): ");
        scanf("%d", &numeroProduto);

        
        if (numeroProduto == 0) {
            break;
        }

        printf("Quantidade vendida por dia: ");
        scanf("%d", &quantidadeVendida);

        double precoVarejo = 0.0;
        switch (numeroProduto) {
            case 1:
                precoVarejo = 2.50;
                break;
            case 2:
                precoVarejo = 3.75;
                break;
            case 3:
                precoVarejo = 1.99;
                break;
            case 4:
                precoVarejo = 5.49;
                break;
            default:
                printf("Numero do produto invalido.\n");
                continue;  

        double totalProduto = precoVarejo * quantidadeVendida;
        valorTotalVarejo += totalProduto;
    }

    
    printf("\nValor total de varejo para a semana: R$%.2f\n", valorTotalVarejo);

   

    return 0;

}