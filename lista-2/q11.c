// Maior de Dois Números​
// ○​ Peça dois números ao usuário e exiba o maior usando o operador ternário.

#include <stdio.h>

int main(void) {
    int num1, num2, maior;
    
    printf("Digite o 1º número: \n");
    scanf("%d", &num1);
    printf("Digite o 2º número: \n");
    scanf("%d", &num2);

   maior = num1 > num2 ? num1 : num2;

   printf("%d\n", maior);

}