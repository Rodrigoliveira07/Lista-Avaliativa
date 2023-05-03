/* 4. Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação. */

#include <stdio.h>

int main() {
    float x, y;

    printf("Digite as coordenadas x e y do ponto: ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0) { // ponto na origem
        printf("Origem\n");
    } else if (x == 0) { // ponto sobre o eixo y
        printf("Eixo Y\n");
    } else if (y == 0) { // ponto sobre o eixo x
        printf("Eixo X\n");
    } else if (x > 0 && y > 0) { // primeiro quadrante
        printf("Q1\n");
    } else if (x < 0 && y > 0) { // segundo quadrante
        printf("Q2\n");
    } else if (x < 0 && y < 0) { // terceiro quadrante
        printf("Q3\n");
    } else { // quarto quadrante
        printf("Q4\n");
    }

    return 0;
}