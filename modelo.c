#include <stdio.h>

int main(void) {
    int num1, num2;

    printf("Digite o 1º número: ");
    scanf("%d", &num1);
    printf("Digite o 2º número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d é maior que %d", num1, num2);
    } else if (num2 > num1) {
        printf("%d é maior que %d", num2, num1);
    } else {
        printf("%d é igual a %d", num2, num1);
    }
}