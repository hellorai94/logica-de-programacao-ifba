// Maior de Dois Números​
// ○​ Leia dois números inteiros e exiba o maior deles.​

#include <stdio.h>

int main(void) {
    int num1, num2;
    
    printf("Digite o 1º número: \n");
    scanf("%d", &num1);
    printf("Digite o 2º número: \n");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d\n", num1);
    } else {
        printf("%d\n", num2);
    }
}