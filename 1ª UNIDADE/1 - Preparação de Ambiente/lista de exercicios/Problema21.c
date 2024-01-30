/*Escreva funções recurivas para calcular:
a) Máximo Divisor Comum entre dois número inteiros;
b) Fatorial de um número natural;
c) A série de fibonacci (1, 1, 2, 3, 5..., a, b,(a + b). . .);
d) isPrime(n): Verificador recursivo se n é um número natural primo.*/

#include <stdio.h>

// Função recursiva para calcular o Máximo Divisor Comum (MDC)
int calcularMDC(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return calcularMDC(b, a % b);
    }
}

// Função recursiva para calcular o fatorial de um número
int calcularFatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

// Função recursiva para calcular a série de Fibonacci
int calcularFibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return calcularFibonacci(n - 1) + calcularFibonacci(n - 2);
    }
}

// Função recursiva para verificar se um número é primo
int isPrime(int n, int i) {
    if (i == 1) {
        return 1; // O número é primo
    } else {
        if (n % i == 0) {
            return 0; // O número não é primo
        } else {
            return isPrime(n, i - 1);
        }
    }
}

int main() {
    int num1, num2, fatorialNum, fibonacciNum, primeNum;

    // a) Calcular Máximo Divisor Comum (MDC)
    printf("Digite dois números para calcular o MDC: ");
    scanf("%d %d", &num1, &num2);
    int mdc = calcularMDC(num1, num2);
    printf("O MDC de %d e %d é: %d\n", num1, num2, mdc);

    // b) Calcular Fatorial
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &num1);
    fatorialNum = calcularFatorial(num1);
    printf("O fatorial de %d é: %d\n", num1, fatorialNum);

    // c) Calcular Fibonacci
    printf("Digite um número para calcular a série de Fibonacci: ");
    scanf("%d", &num1);
    fibonacciNum = calcularFibonacci(num1);
    printf("O %do termo da série de Fibonacci é: %d\n", num1, fibonacciNum);

    // d) Verificar se um número é primo
    printf("Digite um número para verificar se é primo: ");
    scanf("%d", &num1);
    primeNum = isPrime(num1, num1 / 2);
    if (primeNum == 1) {
        printf("%d é um número primo.\n", num1);
    } else {
        printf("%d não é um número primo.\n", num1);
    }

    return 0;
}