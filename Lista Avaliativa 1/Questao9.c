/* 9. Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra. 1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 3 => PERA – 4,00 a unidade */

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt_BR.UTF-8");
	
    int opcao;
    float preco, total = 0;
    int quantidade;

    printf("Bem-vindo(a) a feira de frutas!\n");
    printf("Temos as seguintes frutas dispon�veis:\n");
    printf("1 => ABACAXI � 5,00 a unidade\n");
    printf("2 => MACA � 1,00 a unidade\n");
    printf("3 => PERA � 4,00 a unidade\n");

    do {
        printf("\nDigite o numero da fruta que deseja comprar (ou -1 para sair): ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            preco = 5.0;
            printf("Digite a quantidade de abacaxis que deseja comprar: ");
            scanf("%d", &quantidade);
            total += preco * quantidade;
        } else if (opcao == 2) {
            preco = 1.0;
            printf("Digite a quantidade de macas que deseja comprar: ");
            scanf("%d", &quantidade);
            total += preco * quantidade;
        } else if (opcao == 3) {
            preco = 4.0;
            printf("Digite a quantidade de peras que deseja comprar: ");
            scanf("%d", &quantidade);
            total += preco * quantidade;
        } else if (opcao != -1) {
            printf("Op��o invalida!\n");
        }

    } while (opcao != -1);

    printf("O valor total da compra eh: %.2f\n", total);

    return 0;
}
