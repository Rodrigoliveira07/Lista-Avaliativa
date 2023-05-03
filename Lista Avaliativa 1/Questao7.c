/* 7. Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. */

#include <stdio.h>

int main() {
    int n, primeiro = 0, segundo = 1, proximo;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("O enesimo termo da sequencia de Fibonacci eh: 0\n");
    } else if (n == 1) {
        printf("O enesimo termo da sequencia de Fibonacci eh: 1\n");
    } else {
        for (int i = 2; i <= n; i++) {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }
        printf("O enesimo termo da sequencia de Fibonacci eh: %d\n", proximo);
    }

    return 0;
}
