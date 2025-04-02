// Dadas as idades dos pacientes de uma clínica, informe a idade daquele mais
// idoso. Considere que todas as idades são distintas e que o número de pa-
// cientes é informado pelo usuário, no momento da execução do programa.


#include <stdio.h> 

int main() {

    int numPacientes, idade, maiorIdade;
    maiorIdade = 0;

    printf("Total de pacientes? ");
    scanf("%d", &numPacientes);

    for (int i = 1; i <= numPacientes; i++) {
        printf("%dª Idade? ", i);
        scanf("%d", &idade);
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
    }

    printf("A maior idade é %d.", maiorIdade);
}