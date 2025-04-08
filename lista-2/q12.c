// Par ou Ímpar​
// ○​ Determine se um número é par ou ímpar utilizando o operador ternário.

#include <stdio.h>

int main(void) {
    int num;
    char * resultado;
    
    printf("Digite  número: \n");
    scanf("%d", &num);
   
    resultado = (num % 2 == 0) ? "par" : "impar";

   printf("%s\n", resultado);

}