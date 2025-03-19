#include <stdio.h>

int main(void) {
    float valorReal, cotacaoUsd, valorUsd;

    printf("Qual valor em real?");
    scanf("%f", &valorReal);
    printf("Qual a cotação em Dolar?");
    scanf("%f", &cotacaoUsd);

    valorUsd = valorReal * cotacaoUsd;

    printf("O valor de R$ %.2f em dolar é $ %.2f.\n", valorReal, valorUsd);

    

}