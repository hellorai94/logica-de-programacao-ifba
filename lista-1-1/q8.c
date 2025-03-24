// Faça um algoritmo que leia o peso e a altura de uma pessoa e calcule o seu IMC usando a seguinte fórmula IMC = peso (kg) / (altura (m) x altura (m)). Após ter o valor do
// IMC escreva qual a condição da pessoa usando a tabela abaixo:

#include <stdio.h>

int main(void) {

    float peso, altura, imc;

    printf("Qual o seu peso (em quilogramas)? ");
    scanf("%f", &peso);
    printf("Qual a sua altura (em metros)? ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("O seu IMC é: %.2f\n", imc);
    
    if (imc < 18.5) {
        printf("Baixo do Peso.\n");
    } else if (imc < 25) {
        printf("Normal.\n");
    } else if (imc < 30) {
        printf("Sobrepeso.\n");
    } else {
        printf("Obesidade.\n");
    }

    return 0;

}