// Numa eleição há três candidatos, identificados como A, B e C. Dados os
// votos dos eleitores, informe o resultado da eleição

#include <stdio.h>

int main(void) {
    int totalEleitores, totalA = 0, totalB = 0, totalC = 0, totalNulo = 0;
    char voto;
    
    printf("Total de eleitores? ");
    scanf("%d", &totalEleitores);

    for (int i = 1; i <= totalEleitores; i++) {
        printf("%dº voto? ", i);
        scanf(" %c", &voto);

        if (voto == 'A') {
            totalA++;
        } else if (voto == 'B') {
            totalB++;
        } else if (voto == 'C') {
            totalC++;
        } else {
            totalNulo++;
        }
    }

    printf("A...........:%d\n", totalA);
    printf("B...........:%d\n", totalB);
    printf("C...........:%d\n", totalC);
    printf("Nulos.......:%d\n", totalNulo);

    return 0;
}