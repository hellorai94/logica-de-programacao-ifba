// Numa fábrica, uma máquina precisa de manutenção sempre que o número de peças defeituosas supera 10% da produção. Dados o total de peças produzidas e o total de peças defeituosas, informe se a máquina precisa de manutenção

#include <stdio.h>

int main(void) {
    float totalPecas, pecasDefeituosas, percentual;

    printf("Qual o total de peças produzidas? ");
    scanf("%f", &totalPecas);
    printf("Qual o total de peças defeituosas? ");
    scanf("%f", &pecasDefeituosas);

    percentual = (100 * pecasDefeituosas / totalPecas);

    if (percentual > 10) {
        printf("Precisa de manutenção.\n");
    } else {
        printf("Não precisa de manutenção.\n");
    }

}
