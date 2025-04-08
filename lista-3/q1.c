// Par ou Ímpar​
// ○​ Escreva um programa que leia um número inteiro e informe se ele é par ou
// ímpar.​


#include <stdio.h> 

int main(void) {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Par.\n");
    } else {
        printf("Ímpar.");
    }
}