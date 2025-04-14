#include <stdio.h>

int main(void) {
    int valorSaque;

    printf("Quanto você quer sacar? ");
    scanf("%d", &valorSaque);

    int qnt100 = valorSaque / 100;
    valorSaque = valorSaque % 100;

    int qnt50 = valorSaque / 50;
    valorSaque = valorSaque % 50;

    int qnt20 = valorSaque / 20;
    valorSaque = valorSaque % 100;

    int qnt10 = valorSaque / 10;
    valorSaque = valorSaque % 10;

    int qnt5 = valorSaque / 5;
    valorSaque = valorSaque % 5;

    printf("O valor de cada nota a ser sacado é:\n R$ 100: %d nota(s).\nR$ 50: %d nota(s).\nR$ 20: %d nota(s).\nR$ 10: %d nota(s).\nR$ 5: %d nota(s).\n", qnt100, qnt50, qnt20, qnt10, qnt5);
}