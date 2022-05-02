#include <stdio.h>

int main(void)
{
    int ano, lastNumPlaca;
    char LNP[10][20] = {{"Outubro"}, {"Janeiro"}, {"Fevereiro"}, {"Marco"}, {"Abril"}, {"Maio"}, {"Junho"}, {"Julho"}, {"Agosto"}, {"Setembro"}};

    printf("\nDigite o ano do seu carro: ");
    scanf("%i", &ano);
    if (ano < 1980)
    {
        printf("\nIsento de IPVA");
    }
    else
    {
        printf("\nDigite o ultimo numero da placa de seu carro: ");
        scanf("%i", &lastNumPlaca);
        while (lastNumPlaca > 9)
        {
            printf("\nNumero invalido digite novamente: ");
            scanf("%i", &lastNumPlaca);
        }
        for (int x = 0; x < 9; x++)
        {
            if (lastNumPlaca == x)
                printf("\nIPV vence em %s \n", LNP[x]);
        }
    }
    return 0;
}