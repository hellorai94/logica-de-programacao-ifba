// 13.​Caixa Eletrônico​
// ●​ Simule um caixa eletrônico onde o usuário informa um valor a ser sacado e o programa
// exibe a quantidade mínima de notas de R$100, R$50, R$20, R$10 e R$5 necessárias
// para o saque.​

#include <stdio.h> 

int main(void) {
    int valorSaque;

    printf("Qual você quer sacar? \n");
    scanf("%d", &valorSaque);

    int qnt100 = valorSaque / 100;
    printf("%d notas de R$ 100.\n", qnt100);
    valorSaque = valorSaque % 100;

    int qnt50 = valorSaque / 50;
    printf("%d notas de R$ 50.\n", qnt50);
    valorSaque = valorSaque % 50;

    int qnt20 = valorSaque / 20;
    printf("%d notas de R$ 20.\n", qnt20);
    valorSaque = valorSaque % 20;

    int qnt10 = valorSaque / 10;
    printf("%d notas de R$ 10.\n", qnt10);
    valorSaque = valorSaque % 10;

    int qnt5 = valorSaque / 5;
    printf("%d notas de R$ 5.\n", qnt5);   
    
}