#include <stdio.h>

unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Caso base
    } else {
        return n * fatorial(n - 1);  // Chamada recursiva
    }
}

int main() {
    int num;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Número inválido! Digite um inteiro positivo.\n");
        return 1; 
    }

    printf("Fatorial de %d = %llu\n", num, fatorial(num));

    return 0;
}
