#include <stdio.h>
#define MAXIMO_ALUNOS 100

// struct - armazenar vários dados relacionados (diferentes tipos) definindo um tipo de dado (Aluno)
typedef struct {
   int id;
   char nome[40];
   float nota;

} Aluno;

// vetor de alunos que armazena elementos do tipo Aluno
Aluno alunos[MAXIMO_ALUNOS];
int totalAlunos = 0;

// função que confere se ainda pode cadastrar alunos, se o id já tá cadastrado e também realiza o cadastro de novos alunos
int cadastrarAluno () {
    // verifica se ainda é possível cadastar alunos, de acordo com o limite estabelecido  
    if (totalAlunos >= MAXIMO_ALUNOS) {
        printf("Quantidade máxima de alunos cadastrados já preenhecida.");
        return 0;
    };
    
    // verifica se já existe aluno com o ID
    printf("Digite o ID do aluno: ");
    scanf("%d", &alunos[totalAlunos].id);
        for (int i = 0; i < totalAlunos; i++) {
        if (alunos[i].id == alunos[totalAlunos].id) {
        printf("Aluno com id já cadastrado.\n");
        return 0;
        }
    };

    // cadastra o aluno e intera
    printf("Digite o nome do aluno: ");
    scanf("%39s", alunos[totalAlunos].nome);
    printf("Digite a nota do aluno: ");  
    scanf("%f", &alunos[totalAlunos].nota);
    totalAlunos++;
    return 1;  
};


void mostrarAluno(int id) {
    int encontrado = 0;

    // procura o aluno pelo id, se encontrado, mostra, caso não, avisa que não encontrou
    for (int i = 0; i < totalAlunos; i++) {
        if (alunos[i].id == id) {
            printf("===================================\n");
            printf("\nAluno encontrado: \n"); 
            printf("ID: %d\n", alunos[i].id);
            printf("Nome: %s\n", alunos[i].nome);
            printf("Nota: %.2f\n", alunos[i].nota);
            encontrado = 1;
            break;
        }
    }

    if (encontrado == 0) {
        printf("=====================================\n");
        printf("Aluno não encontrado.\n");
    }
}

 
Aluno editarAluno(int id) {
    int encontrado = 0;
    for (int i = 0; i < totalAlunos; i++) {
        if(alunos[i].id == id){
            printf("=======================================\n");
            printf("Aluno encontrado\n");
            printf("Novo nome do aluno: ");
            scanf("%39s", alunos[i].nome);
            printf("Nova nota do aluno: ");
            scanf("%f", &alunos[i].nota);
            printf("Aluno editado.\n");
            
            return alunos[i];
            encontrado = 1;
            break;
        }
    }   
    if (encontrado == 0) {
        printf("=====================================\n");
        printf("Aluno não encontrado.\n");
}
};

// Mostra todos os alunos cadastrados
Aluno mostrarTodos() {
    printf("======Lista de todos os Alunos=======\n");
    for (int i = 0; i < totalAlunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("ID: %d\n", alunos[i].id);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Nota: %.2f\n", alunos[i].nota);
    }
};

Aluno verEstatisticas() {
    printf("============Estatísticas=============\n");
    float comparaMaior = 0, comparaMenor = 10, somaNotas = 0;
      for (int i = 0; i < totalAlunos; i++){
          if(alunos[i].nota > comparaMaior){
          comparaMaior = alunos[i].nota; 
          }

          if(alunos[i].nota<=comparaMenor){
          comparaMenor = alunos[i].nota; 
          } 

        somaNotas += alunos[i].nota;        
      }

    printf("\nMaior nota: %.2f\n", comparaMaior);
    printf("Menor nota: %.2f\n", comparaMenor);
    float media = somaNotas / totalAlunos;  
    printf("Média: %.2f\n", media);
}

// menu
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
        printf("=====================================\n\n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: cadastrarAluno();
                break;
            case 2: 
                printf("Digite o id do aluno: ");
                scanf("%d", &idPesquisar);
                mostrarAluno(idPesquisar);
                break;
            case 3: 
                printf("Digite o id do aluno: ");
                scanf("%d", &idEditar);
                editarAluno(idEditar);   
                break;
            case 4: mostrarTodos();
                break;
            case 5: verEstatisticas();
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



