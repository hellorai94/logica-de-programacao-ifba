// Desenvolva um algoritmo que leia as notas de 3 disciplinas e calcule a média do aluno.
// Se a média for maior ou igual a 6, o aluno está aprovado, senão está reprovado.

#include <stdio.h>

int main(void) {

    float nota1, nota2, nota3, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;
    
    if (media >= 6) {
        printf("Aprovado.\n");
    } else {
        printf("Reprovado.\n");
    }

    return 0;
}