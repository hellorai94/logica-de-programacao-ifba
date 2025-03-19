// Escreva um programa em C que solicite ao usuário o salário mensal e calcule o
// imposto de renda a ser pago com base na seguinte tabela fictícia:
// 
// Faixa Salarial (R$)
// Alíquota (%)
// Até 2.000 Isento (0%)
// De 2.001 a 3.500 7.5%
// De 3.501 a 5.000 15%
// Acima de 5.000 22.5%

#include <stdio.h>

int main(void) {
    float salario, imposto;
    imposto = 0;

    printf("Qual o salário? ");
    scanf("%f", &salario);

    if (salario <= 2000) {
        printf("Isento.\n");
    } else if (salario <= 3500) {
        imposto = (salario * 7.5) / 100;
        printf("Imposto de Renda: %.2f\n", imposto);
    } else if (salario <= 5000) {
        imposto = (salario * 15) / 100;
        printf("Imposto de Renda: %.2f\n", imposto);
    } else {
        imposto = (salario * 22.5) / 100;
        printf("Imposto de Renda: %.2f\n", imposto);
    }
} 