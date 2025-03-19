#include <stdio.h>

int main(void) {
    float comprimento, largura, area;
    printf("Comprimento: ");
    scanf("%f", &comprimento);
    printf("Largura: ");
    scanf("%f", &largura);

    area = comprimento * largura;
    printf("A área é de %.2f m².\n", area);
}