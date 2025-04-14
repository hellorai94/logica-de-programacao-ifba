// Fatorial de um Número​
// ○​ Solicite um número inteiro positivo e exiba seu fatorial usando um laço while ou
// for.​

#include <stdio.h>

int main (void) {
    int num, fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++ ) {
         fatorial *= i;
    };

    printf("O fatorial de %d é %d.\n", num, fatorial);

};