#include <stdio.h>

int main(void)
{
    int z = 0, n, passos = 1, maior = 0;
    while (z != 1)
    {
        printf("\nDigite um numero entre 0 e 1 milhao:\n");
        scanf("%i", &n);
        if (0 <= n && n <= 1000000)
        {
            z = 1;
        }
    }
    if (n == 0)
    {
        printf("\n%i eh zero nao entra para nenhuma das formulas", n);
    }
    else
    {
        printf(" %i ", n);
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                n = 3 * n + 1;
            }
            if (n > maior)
                maior = n;
            passos++;
            printf(" %i ", n);
        }
        printf("\nHa %i passos e o maior valor eh %i ", passos, maior);
    }
}