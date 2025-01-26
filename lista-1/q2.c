// Escreva um programa que lê o raio de um círculo e calcula sua área.
// area = 3.14 * raio2

#include <stdio.h>

int main(void) {
    float raio, area;

    printf("Qual o raio do círculo? ");
    scanf("%f", &raio);

    area = 3.14 * (raio * raio);
    printf("A área é de %.2f m²\n", area);

}