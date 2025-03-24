// Dados três números, verifique se eles podem ser medidas de um triângulo e, se puderem, classifique o triângulo como equilátero, isóscele ou escaleno.

#include <stdio.h>

int main(void) {
    float medida1, medida2, medida3;

    printf("Digite a 1º medida: ");
    scanf("%f", &medida1);
    printf("Digite a 2º medida: ");
    scanf("%f", &medida2);
    printf("Digite a 3º medida: ");
    scanf("%f", &medida3);

    if ((medida1 + medida2 > medida3) && (medida1 + medida3 > medida2) && (medida2 + medida3 > medida1)) {
        if (medida1 == medida2 && medida2 == medida3) {
            printf("Equilátero.\n");
        } else if (medida1 == medida2 || medida1 == medida3 || medida3 == medida2 ) {
            printf("Isósceles.\n");
        } else {
            printf("Escaleno.\n");
        }
    } else {
        printf("Não é um triângulo.\n");
    }

}