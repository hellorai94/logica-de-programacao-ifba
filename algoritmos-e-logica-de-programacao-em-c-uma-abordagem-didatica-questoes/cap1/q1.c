#include <stdio.h>

int main(void) {

    int num, dobro;

    printf("Digite um número: ");
    scanf("%d", &num);
    dobro = num * 2;
    printf("O dobro de %d é %d\n", num, dobro);
}