// Crie um algoritmo que leia três números e determine qual é o maior.

#include <stdio.h>

int main(void) {

    int num1, num2, num3, maior;

    printf("Digite o número 1: ");
    scanf("%d", &num1);
    printf("Digite o número 2: ");
    scanf("%d", &num2);
    printf("Digite o número 3: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("O maior número é o %d.\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("O maior número é o %d.\n", num2);
    } else {
        printf("O maior número é o %d.\n", num3);
    }

    return 0;
}