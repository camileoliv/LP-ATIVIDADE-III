#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    int i, j;
    int linha = 999;
    int opcao;
    char nome[linha][250];
    char telefone[linha][11];

    do
    {
        printf("Seja bem-vindo a sua Agenda Virtual!\n");
        printf("1- Cadastrar um novo número.\n");
        printf("2- Agenda com os números cadastrados.\n");
        printf("Resposta: ");
        scanf("%i", &opcao);

        system("cls||clear");

        fflush(stdin);

        switch (opcao)
        {
        case 1:
            printf("Cadastre seu número");
            printf("\n");

            printf("Seu nome: ");
            gets(nome[j]);

            printf("Digite seu telefone fixo: ");
            gets(telefone[j]);
            system("cls||clear");
            j++;

            break;

        case 2:
            printf("Agenda Virtual \n");

            for (i = 1; i < j; i++)
            {
                printf("Nome: %s \n", nome[i]);
                printf("Contato: %s \n\n", telefone[i]);
            }

        default:
            break;
        }

    } while (opcao == 1);

    return 0;
}
