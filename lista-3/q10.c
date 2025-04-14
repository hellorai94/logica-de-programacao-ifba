// 10.​Série de Fibonacci​
// ●​ Peça ao usuário para informar quantos termos da sequência de Fibonacci devem ser
// exibidos e imprima-os.​
// A sucessão de Fibonacci (ou sequência de Fibonacci), é uma sequência de números inteiros, começando normalmente por 0 e 1, na qual cada termo subsequente corresponde à soma dos dois anteriores.

 #include <stdio.h>

 int main (void) {
    int qntTermos, numTemp, num1 = 0, num2 = 1;
    // num1 e num 2 começa com esses números pq é da sequência

    printf("Quantos termos da sequência de Fibonacci você quer? \n");
    scanf("%d", &qntTermos);

    printf("Fibonacci.\n");
    for (int i = 0; i < qntTermos; i++) {
        printf("%d\n", num1); 
        numTemp = num1 + num2; 
        num1 = num2; 
        num2 = numTemp; 
    }
    return 0;
 }



