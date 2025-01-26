#include <stdio.h>

int main(void) {

    float totalVenda, comissao;
    printf("Digite o total de vendas: ");
    scanf("%f", &totalVenda);

    comissao = totalVenda * 0.1;
    printf("A comissão é de %.2f\n", comissao);
}