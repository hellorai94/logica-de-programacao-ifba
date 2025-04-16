// Faça um algoritmo que leia uma quantidade não determinada numeros até que seja digitado um numero <= 0. Ao final da leitura, imprima as seguintes informações: (3 pontos)
// Quantidade de numeros pares.
// Quantidade de numeros impares.

#include <stdio.h>

int main(void) {
    int num = 1, par = 0, impar = 0;

    while (num > 0) {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num % 2 == 0 && num > 0) {
            par++;
        } else if (num % 2 != 0 && num > 0) {
            impar++;
        };

    }

    printf("Quantidade números pares: %d.\nQuantidade de números ímpares: %d.\n", par, impar);
}