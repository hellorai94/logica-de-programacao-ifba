// Tabuada Simples​
// ○​ Solicite um número inteiro e exiba a tabuada de 1 a 10 desse número usando
// um laço while.​

#include <stdio.h> 

int main(void) {
    int num, mult, cont = 1;

    printf("Digite um número inteiro: \n");
    scanf("%d", &num);

    while (cont <= 10) {
        mult = num * cont;
        printf("%d X %d = %d\n", num, cont, mult);
        cont++;
    }
}