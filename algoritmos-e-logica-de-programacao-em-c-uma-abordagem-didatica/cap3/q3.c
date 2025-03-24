// Dada a idade de um nadador, informe a sua categoria: infantil (até 10 anos), juvenil (até 17 anos) ou sênior (acima de 17 anos).

#include <stdio.h>

int main(void) {
    int idade;

    printf("Qual a idade do nadador? ");
    scanf("%d", &idade);

    if (idade < 11) {
        printf("Infantil.\n");
    } else if (idade < 18) {
        printf("Juvenil.\n");
    } else {
        printf("Sênior.\n");
    }

    return 0;

}