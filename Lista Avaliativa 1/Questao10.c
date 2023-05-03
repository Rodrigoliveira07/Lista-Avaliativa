/* 10. Faça um programa que leia 10 inteiros e imprima sua média. */

#include <stdio.h>

int main() {
    int numeros[10], soma = 0;
    float media;

    // Lê os 10 números
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        soma += numeros[i]; // Calcula a soma
    }

    // Calcula a média
    media = (float) soma / 10;

    // Imprime a média
    printf("A média dos números digitados é: %.2f\n", media);

    return 0;
}
