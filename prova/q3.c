// Faça um algoritmo que leia 10 números inteiros e para cada um deles determine se ele é primo ou não. (3 pontos)

#include <stdio.h> 

int main(void) {
    int num, r = 1, cont;

    while (r <= 10) {

        printf("Digite o %dº número: ", r);
        scanf("%d", &num);
        r++;
        cont = 0;

        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                cont++;
            } 
        } 

            if (cont == 2) {
                printf("É primo.\n");
            } else {
                printf("Não é primo.\n");
            }
    }
}








    
