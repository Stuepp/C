#include <stdio.h>

int main(void)
{
    float a, b;
    int res;

    printf("\nDigie 2 numeros:");
    scanf("%f%f", &a, &b);
    printf("\nEscolha as opreacao que deseja fazer: soma(1) divisao(2) diferenca(3) multiplicacao(4)\n");
    scanf("%i", &res);

    if (res == 1)
    {
        float result = a + b;
        printf("\nO resultado da soma de %f %f eh %f", a, b, result);
    }
    else if (res == 2)
    {
        float result = a / b;
        printf("\nO resultado da divisao de %f %f eh %f", a, b, result);
    }
    else if (res == 3)
    {
        float result = a - b;
        printf("\nO resultado da diferenca de %f %f eh %f", a, b, result);
    }
    else if (res == 4)
    {
        float result = a * b;
        printf("\nO resultado da multiplicacao de %f %f eh %f", a, b, result);
    }
    return 0;
}