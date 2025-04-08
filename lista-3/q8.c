// 8.​ Média de Notas​
// ○​ Leia as notas de 5 alunos e calcule a média da turma. Use um laço para a
// entrada dos valores.​

#include <stdio.h> 

int main(void) {
    float nota, media, soma = 0;
    int  i = 1;

    for (i; i <= 5; i++) {
        printf("%dº nota: ", i);
        scanf("%f", &nota);
        soma += nota;
    }
    media =  soma / (i - 1);
    printf("A média da turma é %.2f. \n", media);

}