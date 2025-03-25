// 7. Calculadora Simples​
// ○​ Crie uma calculadora que pede dois números e uma operação (+, -, *, /), e
// retorna o resultado da operação usando switch-case.

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