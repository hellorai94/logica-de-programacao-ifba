#include <stdio.h>

int main(void) {
    float salario, salarioReajustado, reajuste;

    printf("Qual o percentual de reajuste?");
    scanf("%f", &reajuste);
    printf("Qual o salário?");
    scanf("%f", &salario);

    salarioReajustado = salario + (salario * reajuste);
    printf("O salário reajustado é R$%2.f.\n", salarioReajustado);
}