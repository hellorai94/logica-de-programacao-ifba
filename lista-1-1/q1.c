// Crie um algoritmo que leia dois números inteiros e exiba a soma deles.

#include <stdio.h>

int main(void) {
    int num1, num2, soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    printf("A soma é %d.\n", soma);

}