// 2.​ Maior de Dois Números​
// ○​ Peça dois números ao usuário e exiba o maior deles.

#include <stdio.h>

int main(void) {
    int num1, num2;

    printf("Digite o número 1: ");
    scanf("%d", &num1);
    printf("Digite o número 2: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O maior número é: %d.\n", num1);
    } else if (num2 > num1) {
        printf("O maior número é: %d.\n", num2);
    } else {
        printf("Os dois números são iguais.");
    }
} 