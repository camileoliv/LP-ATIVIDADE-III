#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    int i,j;
    int opcao;
    int linha = 999;
    int quantidadeDeVendas[linha];
    char produto [linha] [250];
    float valor [linha], lucro;

    do
    {
        printf("ECommerce\n");
        printf("1- Cadastrar uma nova venda\n");
        printf("2- Overall das vendas realizadas\n");
        printf("Resposta: ");
        scanf("%i", &opcao);

        system("cls||clear");

        fflush(stdin);

        switch (opcao)
        {
        case 1:
            printf("Insira dados da venda");
            printf("\n");

            printf("Nome do produto: ");
            gets(produto[j]);

            printf("Valor do produto: ");
            scanf("%f",&valor[j]);

            printf("Quantidade vendida: ");
            scanf("%i",&quantidadeDeVendas[j]);

            lucro += (float)valor[j];

            system("cls||clear");
            j++;

            break;

        case 2:
            printf("Vendas do dia!\n");
            printf("Total de vendas realizadas: %i \n", j);
            printf("Lucro do dia: %.2f \n\n", lucro);

        default:
            break;
        }

    } while (opcao == 1);
    return 0;
}