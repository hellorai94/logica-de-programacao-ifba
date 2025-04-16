// Verificador de Notas​
// ○​ Peça ao usuário para digitar uma nota entre 0 e 10. Caso ele digite um valor
// inválido, exiba uma mensagem de erro e continue pedindo até que ele informe
// um valor correto.​

#include <stdio.h> 

int main(void) {
    int nota;

    printf("Digite uma nota entre 0 - 10: \n");
    scanf("%d", &nota);

    while (nota > 10 || nota < 0) {
        printf("Errado. Digite uma nota entre 0 - 10: \n");
        scanf("%d", &nota);
    }
}