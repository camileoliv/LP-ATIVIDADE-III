#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main () {

    int linha = 5;
    int coluna = 3;
    int i, j;
    char nome [linha] [250], situacao [linha][250];
    int idade[linha];
    float nota[linha] [coluna], media[linha], soma;

    for ( i = 0; i < linha; i++)
    {
       printf("Digite o seu nome: ");
       gets(nome[i]);

       printf("Digite a sua idade: ");
       scanf("%d",&idade[i]);

       for ( j = 0; j < coluna; j++)
       {
        printf("Digite a sua %iª nota: ",j+1);
        scanf("%f",&nota[i][j]);

        soma+= nota[i][j];

       }

       printf("\n");

       media[i]= soma/coluna;
       soma = 0;

       fflush(stdin);
       printf("\n");
       
       if (media[i] >= 7 )
       {
        strcpy(situacao[i],"Aprovado!");
       } else if (media[i] < 7 && media[i] >= 5)
       {
        strcpy(situacao[i],"Recuperação!");
       } else {
        strcpy(situacao[i],"Reprovado!");
       }
       

    }

    for ( i = 0; i < linha; i++)
    {
        printf("%i° aluno: %s \n", i+1, nome[i]);
        printf("Idade: %d \n",idade[i]);

        for ( j = 0; j < coluna; j++)
        {
            printf("%i° nota: %.1f \n",j+1, nota[i][j]);
        }

        printf("Situação: %s \n\n",situacao[i]);
        
    }
    
    
    return 0;
}