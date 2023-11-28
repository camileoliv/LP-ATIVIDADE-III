#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {
    setlocale(LC_ALL, "portuguese");
    int linha = 5; 
    int i;
    char nome [linha] [250];
    int idade[linha], maiorIdade = INT_MIN, menorIdade = INT_MAX;
    float peso[linha], maiorPeso = 0, menorPeso = 999;
    float altura[linha], maiorAltura = 0, menorAltura = 999;

    for ( i = 0; i < linha; i++)
    {
        printf("Digite o seu nome: ");
        gets(nome[i]);

        fflush(stdin);

        printf("Digite o seu peso: ");
        scanf("%f",&peso[i]);

        printf("Digite a sua altura: ");
        scanf("%f",&altura[i]);
        
        printf("Digite a sua idade: ");
        scanf("%d",&idade[i]);

        printf("\n");

        fflush(stdin);

        
    maiorIdade = idade[i] > maiorIdade? idade [i] : maiorIdade;
    menorIdade = idade[i] < menorIdade? idade [i] : menorIdade;

    maiorAltura = altura[i] > maiorAltura? altura[i] : maiorAltura;
    menorAltura = altura[i] < menorAltura? altura[i] : menorAltura;

    maiorPeso = peso[i] > maiorPeso? peso[i] : maiorPeso;
    menorPeso = peso[i] < menorPeso? peso[i] : menorPeso;

    }

    system("cls||clear");

    for ( i = 0; i < linha; i++)
    {
        printf("%i° nome: %s \n", i+1, nome[i]);
        printf("Idade: %i \n", idade[i]);
        printf("Peso: %.1f \n", peso[i]);
        printf("Altura: %.2f \n",altura[i]);
    }

    printf("\n");

        printf("Aguarde até o carregamento completo das informações!\n");

        printf("Maior altura: %.2f \n",maiorAltura);
        printf("Menor altura: %.2f \n",menorAltura);

        printf("\n");

        sleep (2);

        printf("Maior peso: %.1f \n",maiorPeso);
        printf("Menor peso: %.1f \n",menorPeso);

        printf("\n");

        sleep (2);

        printf("Mais velho: %i \n",maiorIdade);
        printf("Mais novo: %i \n",menorIdade);
    
    
    return 0;

}