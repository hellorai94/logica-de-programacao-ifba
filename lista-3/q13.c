// 15.​Conversão de Base Decimal para Binário​
// ●​ Peça ao usuário para informar um número inteiro positivo e exiba sua representação em
// binário.

#include <stdio.h>

int main(void) {
    int num, binario[32], i = 0;

    printf("Digite o número inteiro positivo:" );
    scanf("%d", &num);
    
    while (num > 0) {
      binario[i] = num % 2;
      num = num / 2;
      i++;
    }
    printf("Binário:\n ");
    for (int r = i - 1; r >= 0; r --){
        printf("%d", binario[r]);
    }
}

