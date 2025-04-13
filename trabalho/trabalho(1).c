#include <stdio.h>
#define MAXIMO_ALUNOS 100

// struct - armazenar vários dados relacionados a mesma coisa 
typedef struct {
   int id;
   char nome[40];
   float nota;

} Aluno;

// vetor de alunos quer armazena elementos do tipo Aluno
Aluno alunos[MAXIMO_ALUNOS];
int totalAlunos = 0;

int cadastrarAluno () {
    if (totalAlunos >= MAXIMO_ALUNOS) {
        printf("Quantidade máxima de alunos cadastrados já preenhecida.");
        return 0;
    };
    
    printf("Digite o ID do aluno: ");
    scanf("%d", &alunos[totalAlunos].id);
        for (int i = 0; i < totalAlunos; i++) {
        if (alunos[i].id == alunos[totalAlunos].id) {
        printf("Aluno com id já cadastrado.\n");
        return 0;
        }
    };

    printf("Digite o nome do aluno: ");
    scanf("%39s", alunos[totalAlunos].nome);
    printf("Digite a nota do aluno: ");  // Retirei o "\n"
    scanf("%f", &alunos[totalAlunos].nota);
    totalAlunos++;
    return 1;  
};


Aluno mostrarAluno(int id)  {
    Aluno semAluno = {0};
    for (int i = 0; i < totalAlunos; i++) {
        if (alunos[i].id == id) {
        return alunos[i];
        };
    };
    return semAluno;
};

Aluno editarAluno(int id) {
    Aluno semAluno = {0};
    for (int i = 0; i < totalAlunos; i++) {
        if(alunos[i].id == id){
            printf("======================\n");
            printf("Aluno encontrado\n");
            printf("Novo Nome do aluno: ");
            scanf("%39s", alunos[i].nome);
            printf("Nova Nota do aluno: ");
            scanf("%f", &alunos[i].nota);
            printf("Aluno editado\n");
            
            return alunos[i];
        }
    }   
    return semAluno;
};


Aluno mostrarTodos() {
    printf("=====LISTA DE TODOS OS ALUNOS=======\n");
    for (int i = 0; i < totalAlunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("ID: %d\n", alunos[i].id);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Nota: %.2f\n", alunos[i].nota);
    }
};

Aluno verEstatisticas() {
    printf("=======Estatisticas=======\n");
    float comparaMaior = 0, comparaMenor = 10, somaNotas = 0;
      for (int i = 0; i < totalAlunos; i++){
          if(alunos[i].nota > comparaMaior){
          comparaMaior = alunos[i].nota; 
          }

          if(alunos[i].nota<=comparaMenor){
          comparaMenor = alunos[i].nota; 
          } 

        somaNotas += alunos[i].nota;        //Faz a soma de todas as notas
      }

    printf("\nMaior nota: %.2f\n", comparaMaior);
    printf("Menor nota: %.2f\n", comparaMenor);
    float media = somaNotas / totalAlunos;  //Faz a Divisão de todas as notas
    printf("Media: %.2f\n", media);
}


int main(void) {
    int opcao, idPesquisar, idEditar;

    do {
        printf("\n=========Escolha uma opção===========\n");
        printf("1 - Cadastro de um novo aluno.\n");
        printf("2 - Mostrar aluno pelo identificador.\n");
        printf("3 - Editar aluno pelo identificador.\n");
        printf("4 - Mostrar todos os alunos.\n");
        printf("5 - Ver estatísticas.\n");
        printf("0 - Sair.\n");
        printf("=======================================\n\n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrarAluno();
                break;
            case 2: 
                printf("Digite o id do aluno: ");
                scanf("%d", &idPesquisar);
                Aluno aluno = mostrarAluno(idPesquisar);
                if (aluno.id != 0 ) {
                    printf("=======================================\n");
                    printf("\nAluno encontrado: \n"); // Adicionei um "\n" no inicio
                    printf("ID: %d\n", aluno.id);
                    printf("Nome: %s\n", aluno.nome);
                    printf("Nota: %.2f\n", aluno.nota);
                } else {
                    printf("=======================================\n");
                    printf("Aluno não encontrado.\n");
                };
                break;
            case 3: 
                printf("Digite o id do aluno: ");
                scanf("%d", &idEditar);
                editarAluno(idEditar);   
                break;
            case 4: mostrarTodos();
                printf("\n====================================\n"); // Coloquei o texto "Lista de Todos os Alunos" no topo: Linha 70
                break;
            case 5: verEstatisticas();
                printf("\n====================================\n");
                break;
            case 0:
                printf("Saindo do sistema...\n");
                break;
            default:
                printf("Escolha uma das opções válidas.\n");
                break;
        }

    } while (opcao != 0);
    return(0);
}



