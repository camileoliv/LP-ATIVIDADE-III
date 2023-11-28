#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
    int i;
    int linha = 5;
    int numero[linha];
    int maior = INT_MIN, menor = INT_MAX;
    int positivos = 0, negativos = 0;
    int pares = 0, impares = 0;
    int somaPares = 0, somaImpares = 0, somaNumero = 0;
    float mediaPares, mediaFinal;

    for (i = 0; i < linha; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero[i]);

        // Pares e Impares
        if (numero[i] % 2 == 0)
        {
            pares++;
            somaPares = somaPares + numero[i];
        }
        else
        {
            impares++;
            somaImpares = somaImpares + numero[i];
        }

        // Positivos e negativos
        if (numero[i] > 0)
        {
            positivos++;
        }
        else
        {
            negativos++;
        }

        // Maior ou menor
        maior = numero[i] > maior ? numero[i] : maior;
        menor = numero[i] < menor ? numero[i] : menor;

        somaNumero+= numero[i];
    }

    mediaPares = somaPares / (float)pares;
    mediaFinal = somaNumero / (float)linha;

    system("cls||clear");

    printf("Quantidade de impares: %d\n", impares);
    printf("Quantidade de números negativos: %d\n", negativos);
    printf("Quantidade de números inseridos: %d\n", i);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média de números pares: %.2f\n", mediaPares);
    printf("Média final: %.2f\n", mediaFinal);

    return 0;
}