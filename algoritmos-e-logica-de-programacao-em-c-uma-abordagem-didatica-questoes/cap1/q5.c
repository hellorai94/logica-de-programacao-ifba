#include <stdio.h>

int main(void) {
    float valorCompra, valorComDesc, desconto;

    printf("Qual o valor da compra?");
    scanf("%f", &valorCompra);
    printf("Qual valor do desconto?");
    scanf("%f", &desconto);

    valorComDesc = valorCompra - (valorCompra * desconto);
    printf("O valor a ser pago é  R$%2.f.\n", valorComDesc);
}