// Dados um capital, uma taxa de juros mensal e um período em meses,
// informe o montante ao final de cada mês.

#include <stdio.h> 

int main() {
    int periodo;
    double capital, juros, valorMes;

    printf("Capital? ");
    scanf("%lf", &capital);
    printf("Juros? ");
    scanf("%lf", &juros);
    printf("Período? ");
    scanf("%d", &periodo);

    valorMes = capital;

    for (int i = 1; i <= periodo; i ++) {
        valorMes *= (1 + juros/100);
        printf("%dº mês: R$ %.2f\n", i, valorMes);
    }
}