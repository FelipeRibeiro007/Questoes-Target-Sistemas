

#include <iostream>

bool Fibonacci(int num) {
    if (num < 0) return false;

    int a = 0, b = 1, c;

    if (num == a || num == b) return true;

    while (b < num) {
        c = a + b;
        a = b;
        b = c;
    }

    return (b == num);
}

int main() {
    int num;
    printf("Digite um número para verificar se ele pertence à sequência de Fibonacci: ");
    scanf("%i",&num);

    if (Fibonacci(num)) {
        printf("%i pertence à sequência de Fibonacci.",num);
    } else {
        printf("%i não pertence à sequência de Fibonacci.",num);
    }

    return 0;
}