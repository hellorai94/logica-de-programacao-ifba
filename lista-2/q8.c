// 8. Dias da Semana​○​ 
// Peça ao usuário um número de 1 a 7 e exiba o nome correspondente do dia da semana (1 = Domingo, 2 = Segunda, etc.).

#include <stdio.h> 

int main(void) {
    int dia;

    printf("Escolha um dia da semana, de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo.\n");
            break;
        case 2:
            printf("Segunda.\n");
            break;
        case 3:
            printf("Terça.\n");
            break;
        case 4:
            printf("Quarta.\n");
            break;
        case 5:
            printf("Quinta.\n");
            break;
        case 6:
            printf("Sexta.\n");
            break;
        case 7:
            printf("Sábado.\n");
            break;
    }
}