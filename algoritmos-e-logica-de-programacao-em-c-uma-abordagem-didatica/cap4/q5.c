// Dados o sexo e a altura de uma pessoa, determine seu peso ideal, de
// acordo com as fórmulas a seguir:
// para homens o peso ideal é 72.7*altura−58
// para mulheres o peso ideal é 62.1*altura − 44.7

#include <stdio.h>

int main(void) {
    char sexo;
    float altura, pesoIdeal;

    printf("Qual o sexo da pessoa? M- Masculino.\n F- Feminino.\n");
    scanf(" %c", &sexo);
    printf("Qual a sua altura? ");
    scanf("%f", &altura);


    switch (sexo) {
        case 'M': 
            pesoIdeal = (72.7 * altura) - 58;
            printf("O seu peso ideal é %.2f.", pesoIdeal);
            break;
        case 'F':
            pesoIdeal = (62.1 * altura) - 44.7;
            printf("O seu peso ideal é %.2f.", pesoIdeal);
            break;

    }
    return 0;

}