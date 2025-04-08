// 6.​ Soma dos N Primeiros Números​
// ○​ Leia um número inteiro positivo N e calcule a soma dos N primeiros números
// naturais usando um laço for.​

#include <stdio.h>

int main(void) {
    int num, soma = 0;

    printf("Digite um número inteiro: \n");
    scanf("%d", &num);

    while (num > 0) {
        soma += num % 10;
        num = num / 10;
    }

    printf("%d\n", soma);
    return 0;
}