// Categoria de Idade​
// ○​ Um usuário digita sua idade e o programa classifica como "Menor de idade"
// (menos de 18 anos) ou "Adulto" (18 anos ou mais) usando o operador ternário.

#include <stdio.h> 

int main(void) {
    int idade;
    char * maior;

    printf("Qual a sua idade? \n");
    scanf("%d", &idade);

    maior = (idade >= 18 ? "Adulto" : "Menor de idade");
    printf("%s\n", maior);
}