// Faça um programa que resolva uma equação de segundo grau: ax2 + bx + c = 0. Os valores de a, b e c devem ser lidos como reais.

#include <stdio.h>
#include <math.h>


int main(void) {
    float a, b, c, delta, x1, x2;

    printf("Digite a: ");
    scanf("%f", &a);
    printf("Digite b: ");
    scanf("%f", &b);
    printf("Digite c: ");
    scanf("%f", &c);

    delta = ((b * b) - 4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("x': %.2f.\n", x1);
    printf("x'': %.2f.\n", x2);

}


