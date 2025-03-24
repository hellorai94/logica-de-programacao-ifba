// Dados três números distintos, exiba-os em ordem crescente.

#include <stdio.h>

int main(void) {
    int num1, num2, num3, maior, medio, menor;

    printf("Digite o número 1: ");
    scanf("%d", &num1);
    printf("Digite o número 2: ");
    scanf("%d", &num2);
    printf("Digite o número 3: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        maior = num1;
        if (num2 > num3) {
            medio = num2;
            menor = num3;
        } else {
            medio = num3;
            menor = num2;
        }
    } else if (num2 > num1 && num2 > num3) {
        maior = num2;
        if (num1 > num3) {
            medio = num1;
            menor = num3;
        } else {
            medio = num3;
            menor = num1;
        }
    } else {
        maior = num3;
        if (num1 > num2) {
            medio = num1;
            menor = num2;
        } else {
            medio = num2;
            menor = num1;
        }
    }
    printf("%d, %d, %d.\n", menor, medio, maior);

}
  