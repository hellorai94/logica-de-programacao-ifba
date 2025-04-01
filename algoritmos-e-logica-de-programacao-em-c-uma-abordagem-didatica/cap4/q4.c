// O perfil de uma pessoa é dado pelo seu ano de nascimento. Por exemplo,
// se o ano é 1987, calculamos a soma 19+87, dividimos seu resultado (106)
// por 5 e pegamos o resto (1). Este resto indica o perfil da pessoa: 0 - tímido,
// 1 - sonhador, 2 - paquerador, 3 - atraente, 4 - irresistível. Dado o ano de
// nascimento de uma pessoa, informe qual é o seu perfil.


#include <stdio.h>

int main(void) {
    int anoNasc, resto, partUm, partDois;

    printf("Qual o ano de nascimento da pessoa? ");
    scanf("%d", &anoNasc);

    partUm = anoNasc / 100;
    partDois = anoNasc % 100;

    resto = (partUm + partDois) % 5;

    switch (resto) {
        case 0:
            printf("Tímido.\0");
            break;
        case 1:
            printf("Sonhador.\n");
            break;
        case 2: 
            printf("Paquerador.\n");
            break;
        case 3: 
            printf("Atraente.\n");
            break;
        case 4:
            printf("Irresistível.\n");
            break;
    }

    return 0;
}