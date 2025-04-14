// 11.​Números Perfeitos​
// ●​ Leia um número inteiro e determine se ele é um número perfeito (um número perfeito é
// aquele cuja soma de seus divisores próprios é igual a ele mesmo).​

#include <stdio.h>

int main(void) {
    int num, numPerfeito = 0;
    printf("Digite o número: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            numPerfeito += i;
        }
    }

    if (numPerfeito == num) {
        printf("É um número perfeito.\n");
    } else {
        printf("Não é um número perfeito.\n");
    }

}