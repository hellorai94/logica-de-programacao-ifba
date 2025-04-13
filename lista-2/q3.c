// Ano Bissexto​
// ○​ Leia um ano e determine se ele é bissexto.
// Anos bissextos são todos os anos múltiplos de 4, mas não de 100, com exceção daqueles que são múltiplos de 400

#include <stdio.h> 

int main(void) {
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if ((ano % 100 != 0 && ano % 4 == 0) || (ano % 400 == 0)) {
        printf("É bissexto.\n");
    } else {
        printf("Não é bissexto.\n");
    }
}