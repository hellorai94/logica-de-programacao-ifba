// Faça um algoritmo que leia o peso e a altura de uma pessoa e calcule o seu IMC usando a seguinte fórmula IMC = peso (kg) / (altura (m) x altura (m)). Após ter o valor do IMC escreva qual a condição da pessoa usando a tabela abaixo: (1 pontos)

#include <stdio.h>

int main(void) {
    float peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("Baixo peso.\n");
    } else if (imc < 24.99) {
        printf("Normal.\n");
    } else if (imc < 29.99) {
        printf("Sobrepeso.\n");
    } else {
        printf("Obesidade.\n");
    }
    return 0;
}