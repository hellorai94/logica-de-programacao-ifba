// Crie um algoritmo que converta uma temperatura de Celsius para Fahrenheit e vice-versa. O usuário deve escolher qual conversão deseja realizar.
// a.​fahrenheit = (celsius * 9/5) + 32;

#include <stdio.h>

int main(void) {

    char conversao;
    float tempInicial, tempFinal;

    printf("Qual conversão você quer fazer? C- Celsius | F- Fahrenheit. ");
    scanf(" %c", &conversao);

    printf("Qual a temperatura? ");
    scanf("%f", &tempInicial);

    if (conversao == 'F' || conversao == 'f') {
        tempFinal = (tempInicial * 9.0 / 5.0) + 32;
        printf("A temperatura final é %.2f °F.\n", tempFinal);
    } else {
        tempFinal = 5.0 / 9.0 * (tempInicial - 32);
        printf("A temperatura final é %.2f C.\n", tempFinal);
    }

    return 0;
}