// Estação do Ano​
// ○​ O usuário digita um número de 1 a 12 (mês do ano). O programa informa a
// estação correspondente considerando o hemisfério sul.

#include <stdio.h> 

int main(void) {
    int num;

    printf("Qual o número do mês do ano? \n");
    scanf("%d", &num);

    switch(num) {
        case 12:
        case 1:
        case 2: 
            printf("Verão.\n"); break;
        case 3:
        case 4:
        case 5:
             printf("Outono.\n"); break;
        case 6: 
        case 7: 
        case 8: 
            printf("Verão.\n"); break;
        case 9:
        case 10:
        case 11:
             printf("Verão.\n"); break;
    }
    return 0;
}