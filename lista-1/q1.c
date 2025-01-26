// Escreva um programa que lê dois números inteiros e imprime a soma, a subtração, a multiplicação, a divisão e o resto da divisão entre os dois números.

#include <stdio.h>

int main(void) {
    int num1, num2, soma, sub, mult, div, resto;

    printf("Digite o número 1: ");
    scanf("%d", &num1);
    printf("Digite o número 2: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;

    if (num2 != 0) {
        div = num1 / num2;
        resto = num1 % num2;
    } else {
        printf("Divisão e resto  não podem ser calculados, pois o divisor é zero.\n");
    }

    printf("A soma de %d e %d é: %d.\n" , num1, num2, soma);
    printf("A subtração de %d e %d é: %d.\n" , num1, num2, sub);
    printf("A multiplicação de %d e %d é: %d.\n" , num1, num2, mult);
    printf("A divisão de %d e %d é: %d.\n" , num1, num2, div);
    printf("O resto da divisão de %d e %d é: %d.\n" , num1, num2, resto);
}