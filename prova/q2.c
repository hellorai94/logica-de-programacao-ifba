// Faça um algoritmo que simule um caixa eletrônico onde o usuário informa um valor a ser sacado e o programa exibe a quantidade mínima de notas de R$200, R$100, R$50, R$20, R$10 e R$5 necessárias para um saque (leia o valor a ser sacado). (2 pontos)
#include <stdio.h> 
    

int main(void) {
    int valorSaque;

    printf("Qual o valor do saque? ");
    scanf("%d", &valorSaque);

    int qnt200 = valorSaque / 200;
    valorSaque = valorSaque % 200;

    int qnt100 = valorSaque / 100;
    valorSaque = valorSaque % 100;

    int qnt50 = valorSaque / 50;
    valorSaque = valorSaque % 50;

    int qnt20 = valorSaque / 20;
    valorSaque = valorSaque % 20;

    int qnt10 = valorSaque / 10;
    valorSaque = valorSaque % 10;

    int qnt5 = valorSaque / 5;


    printf("%d notas de R$200.\n%d notas de R$100.\n%d notas de R$50.\n%d notas de R$20.\n%d notas de R$10.\n%d notas de R$5.\n", qnt200, qnt100, qnt50, qnt20, qnt10, qnt5);

    return 0;
}

