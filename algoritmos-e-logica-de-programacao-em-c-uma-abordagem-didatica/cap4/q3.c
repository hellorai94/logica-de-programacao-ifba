// Dados dois números reais e um caractere (+, -, *, /) representando uma operação a ser efetuada com eles, calcule e informe o resultado da operação.

#include <stdio.h>

int main(void) {
    float num1, num2, operacao;
    char simbolo;

    printf("Digite o número 1: ");
    scanf("%f", &num1);
    printf("Digite o número 2: ");
    scanf("%f", &num2);
    printf("Qual operação você quer fazer?\nSoma (+).\nSubtração (-).\nMultiplicação(*).\nDivisão(/).\n");
    scanf(" %c", &simbolo);

    switch (simbolo) {
        case '+': 
        operacao = num1 + num2;
        break;
        case '-': 
        operacao = num1 - num2;
        break;
        case '*': 
        operacao = num1 * num2;
        break;
        case '/': 
        operacao = num1 / num2;
        break;

    }

    printf("O número %.2f %c %.2f é %.2f.\n", num1, simbolo, num2, operacao);
    return 0;


}