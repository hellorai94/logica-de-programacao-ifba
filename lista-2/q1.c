// ​1.Número Positivo, Negativo ou Zero​
// Escreva um programa que leia um número inteiro e determine se ele é positivo,
// negativo ou zero.

#include <stdio.h>

int main(void) {
    int num;

    printf("Qual o número? ");
    scanf("%d", &num);

    if (num == 0) {
        printf("O número é zero.\n");
    }
    else if (num > 0)
    {
        printf("O número é positivo.\n");
    }
    else {
        printf("O número é negativo.\n");
    }
}
