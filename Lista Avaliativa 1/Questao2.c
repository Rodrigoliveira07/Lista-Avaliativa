/* 2. Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula: */

#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distancia;

    printf("Digite os valores de x e y do ponto 1 (separados por espaço): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite os valores de x e y do ponto 2 (separados por espaço): ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre os pontos (%.2lf, %.2lf) e (%.2lf, %.2lf) eh %.4lf.\n", x1, y1, x2, y2, distancia);

    return 0;
}