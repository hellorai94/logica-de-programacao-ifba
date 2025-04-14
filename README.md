# Conceitos Básicos de Algoritmos e Estruturas de Controle em C

## 📌 Definição de Algoritmo
Um **algoritmo** é uma sequência lógica, finita e definida de instruções para resolver um problema computacional.

**Características principais**:
- ✔️ **Precisão**: Instruções não ambíguas
- ✔️ **Finitude**: Deve terminar após passos limitados
- ✔️ **Efetividade**: Cada passo é executável
- ✔️ **Entrada/Saída**: Recebe e produz dados

## 🔧 Linguagem Interpretada vs Compilada

| Característica       | Linguagem Compilada (C)       | Linguagem Interpretada (Python) |
|----------------------|-------------------------------|----------------------------------|
| **Processo**         | Código → Compilador → Executável | Código → Interpretador (executa linha a linha) |
| **Velocidade**       | ⚡ Mais rápido (código nativo) | 🐢 Mais lento (interpretação em tempo real) |
| **Portabilidade**    | 🔄 Precisa recompilar | ✅ Executa em qualquer plataforma com interpretador |
| **Depuração**        | Mais complexa | Mais simples |

## 🔄 Processamento Básico de Dados

1. **Entrada (Input)**
   ```c
   int idade;
   printf("Digite sua idade: ");
   scanf("%d", &idade);
   ```

2. **Processamento**
   ```c
   int ano_nascimento = 2023 - idade;
   ```

3. **Saída (Output)**
   ```c
   printf("Você nasceu aproximadamente em %d\n", ano_nascimento);
   ```

## 🎚️ Estruturas Condicionais

### `if` - Condição Simples
```c
if (temperatura > 30) {
    printf("Está quente!\n");
}
```

### `if-else` - Condição Binária
```c
if (nota >= 6) {
    printf("Aprovado!\n");
} else {
    printf("Reprovado\n");
}
```

### `else if` - Múltiplas Condições
```c
if (saldo < 0) {
    printf("Saldo negativo\n");
} else if (saldo == 0) {
    printf("Saldo zero\n");
} else {
    printf("Saldo positivo\n");
}
```

## 🔁 Estruturas de Repetição

### `while` - Teste no Início
```c
int contador = 0;
while (contador < 5) {
    printf("Contagem: %d\n", contador);
    contador++;
}
```

### `do-while` - Teste no Final
```c
int valor;
do {
    printf("Digite um valor positivo: ");
    scanf("%d", &valor);
} while (valor <= 0);
```

### `for` - Controle Automático
```c
for (int i = 0; i < 10; i++) {
    printf("Iteração %d\n", i);
}
```

## 📊 Comparação de Loops

| Loop       | Quando Usar                          | Exemplo Clássico                  |
|------------|--------------------------------------|-----------------------------------|
| `while`    | Quando não se sabe quantas iterações | Validar entrada de usuário        |
| `do-while` | Quando precisa executar pelo menos 1x| Menus interativos                 |
| `for`      | Quando se sabe o número de iterações | Percorrer arrays/coleções        |