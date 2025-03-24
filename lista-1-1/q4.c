// Faça um algoritmo que leia um número inteiro e informe se ele é par ou ímpar (Use o operador % (mod) para obter o resto da divisão).

#include <stdio.h>

int main(void) {

    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("É par.\n");
    } else {
        printf("É ímpar.\n");
    }

    return 0;
}