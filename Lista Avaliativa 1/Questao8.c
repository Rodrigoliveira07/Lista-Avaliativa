/* 8. Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo. O programa tem de retornar o maior e o menor número lido */

#include <stdio.h>

int main() {
    int num, maior, menor;

    printf("Digite um numero: ");
    scanf("%d", &num);
    
    maior = num;
    menor = num;

    while(num >= 0) {
        printf("Digite outro numero: ");
        scanf("%d", &num);

        if(num >= 0) {
            if(num > maior)
                maior = num;
            else if(num < menor)
                menor = num;
        }
    }

    printf("O maior numero lido foi: %d\n", maior);
    printf("O menor numero lido foi: %d\n", menor);

    return 0;
}