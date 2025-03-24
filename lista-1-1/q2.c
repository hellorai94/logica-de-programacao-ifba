// Desenvolva um algoritmo que leia dois números e execute as operações de soma, subtração, multiplicação e divisão, exibindo os resultados.

#include <stdio.h>

int main(void) {
    float num1, num2, soma, sub, mult, div;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 *num2;
    div = num1 / num2;

    printf("A soma é %.2f.\n", soma);
    printf("A subtração é %.2f.\n", sub);
    printf("A multiplicação é %.2f.\n", mult);
    printf("A divisão é %.2f.\n", div);

}