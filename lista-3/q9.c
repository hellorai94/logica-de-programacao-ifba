// 9.​ Verificação de Número Primo​
// ○​ Leia um número inteiro e determine se ele é primo ou não.​

#include <stdio.h> 

int main(void) {
    int num, cont = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if(num % i == 0 ) {
            cont++;
        } 
    }

    if (cont == 2) {
        printf("É primo.\n");
    } else {
        printf("Não é primo.\n");
    }
    return 0;
}