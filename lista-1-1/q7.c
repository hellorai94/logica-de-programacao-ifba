// Crie um algoritmo que leia a idade de uma pessoa e informe se ela pode votar, com base na legislação (idade mínima de 16 anos para votar).

#include <stdio.h> 

int main(void) {
    int idade;

    printf("Qual a idade da pessoa? ");
    scanf("%d", &idade);

    if (idade >= 16) {
        printf("Pode votar.\n");
    } else {
        printf("Não pode votar.\n");
    }
}