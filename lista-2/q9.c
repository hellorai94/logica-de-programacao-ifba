// 9. Classificação de Notas​
// ○​ O usuário informa uma nota de 0 a 10. Exiba a classificação usando
// switch-case:
// ■​ 9-10: "Ótimo"
// ■​ 7-8: "Bom"
// ■​ 5-6: "Regular"
// ■​ 0-4: "Ruim"

#include <stdio.h> 

int main(void) {
    int nota;

    printf("Informe a nota: ");
    scanf("%d", &nota);

    switch (nota) {
        case 0: case 1: case 2: case 3: case 4:
            printf("Ruim.\n");
            break;
        case 5: case 6:
            printf("Regular.\n");
            break;
        case 7: case 8:
            printf("Bom.\n");
            break;
        case 9: case 10:
            printf("Ótimo.\n");
            break;
    }
    return 0;
   
}