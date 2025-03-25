// Dada uma letra (S, C, D ou V), informe o estado civil correspondente por extenso (Solteiro, Casado, Divorciado ou Viúvo).

#include <stdio.h>

int main(void) {

    char estadoCivil;
    printf("Qual o estado civil? ");
    scanf(" %c", &estadoCivil);

    switch (estadoCivil) {
        case 'S': 
            printf("Solteiro.\n"); 
            break;
        case 'C': 
            printf("Casado.\n"); 
            break;
        case 'D': 
            printf("Divorciado.\n");
            break;
        case 'V': 
            printf("Viúvo.\n"); 
            break;
    }

    return 0;
}