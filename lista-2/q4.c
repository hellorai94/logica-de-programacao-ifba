// 4.​ Par ou Ímpar​
// ○​ Solicite um número e informe se ele é par ou ímpar.


#include <stdio.h>

int main(void) {
    int num1;

    printf("Digite o número 1: ");
    scanf("%d", &num1);

    if (num1 % 2 == 0) {
        printf("O número é par: %d.\n", num1);
    } else {
        printf("O número é ímpar: %d.\n", num1);
    }
} 