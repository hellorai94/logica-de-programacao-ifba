// Dado um número inteiro indicando uma operação num caixa eletrônico, informe a opção correspondente: 1 – saldo, 2 – extrato, 3 – saque, 4 – sair.


#include <stdio.h>

int main(void) {
    int num;

    printf("Qual operação você quer fazer? ");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("saldo.\n");
            break;
        case 2:
            printf("extrato.\n");
            break;
        case 3:
            printf("saque.\n");
            break;
        case 4: 
            printf("sair.\n");
            break;
    }

    return 0;
}