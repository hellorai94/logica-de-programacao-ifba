// Escreva um programa que lê o peso e a altura (em metros) de uma pessoa e calcula o seu imc.
// a.​imc = peso / altura2

#include <stdio.h>

int main(void) {
    float peso, altura, imc;

    printf("Digite aqui o peso: ");
    scanf("%f", &peso);
    printf("Digite aqui a altura: ");
    scanf("%f", &altura);

    imc = (peso / (altura * altura));
    printf("O imc é de %.2f.\n", imc);
}