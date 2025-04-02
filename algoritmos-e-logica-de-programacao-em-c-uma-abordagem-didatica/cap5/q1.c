// Dadas as notas dos alunos de uma turma, informe a média da turma.

#include <stdio.h> 

int main() {

    int numAluno;
    float nota, notaTotal, media; 
    notaTotal = 0;

    printf("Total alunos? ");
    scanf("%d", &numAluno);

    for (int i = 1; i <= numAluno; i++) {
        printf("%dª nota? ", i);
        scanf("%f", &nota);
        notaTotal += nota;
    }

    media = notaTotal / numAluno;
    printf("A média é: %.1f.", media);
}