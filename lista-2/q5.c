// Aprovado , Recuperação ou Reprovado​
// ○​ Leia a nota de um aluno e exiba "Aprovado" se a nota for maior ou igual a 6.0,
// ou exiba “Recuperação” se nota for maior ou igual a 4, ou exiba “Reprovado” se
// menor que 4.

#include <stdio.h>

int main(void) {
    float nota;

    printf("Qual a nota do aluno? ");
    scanf("%f", &nota);

    if (nota >= 6.0) {
        printf("Aprovado.\n");
    } else if (nota >= 4.0) {
        printf("Recuperação.\n");
    } else {
        printf("Reprovado.\n");
    }
} 