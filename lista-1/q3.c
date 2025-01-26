// Escreva um programa que lê uma temperatura em Celsius e converte para Fahrenheit.
// a.​fahrenheit = (celsius * 9/5) + 32;

#include <stdio.h>

int main(void) {
    float tempCelsius, tempFahrenheit;

    printf("Qual a temperatura em Celsius? ");
    scanf("%f", &tempCelsius);

    tempFahrenheit = ((tempCelsius * 9 / 5) + 32);
    printf("%.2f °C são %.2f °F\n", tempCelsius, tempFahrenheit);
}