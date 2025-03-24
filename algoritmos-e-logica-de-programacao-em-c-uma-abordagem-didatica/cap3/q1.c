// Numa papelaria, até 100 folhas, a cópia custa R$ 0,25, e acima de 100 folhas custa R$ 0,20. Dado o total de cópias, informe o total a ser pago.

#include <stdio.h>

int main(void) {
    int totalCopia;
    float precoFinal;

    printf("Qual o total de cópias? ");
    scanf("%d", &totalCopia);

    if (totalCopia > 100) {
        precoFinal = totalCopia * 0.2;
    } else {
        precoFinal = totalCopia * 0.25;
    }

    printf("O total a ser pago é R$ %.2f.\n", precoFinal);
}