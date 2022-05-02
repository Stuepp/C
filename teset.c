#include <stdio.h>

int ehPrimo(int n);
int intervaloPrimo(int n1, int n2);

int main(void)
{
    int e, n, n1, n2;

    printf("\n(1) testa um numero eh primo \n(2) descobre primos de entre n1 e n2 \n");
    scanf("%i", &e);
    if (e == 1)
    {
        printf("\nDigite um numero para ver se eh primo ");
        scanf("%i", &n);
        x = ehPrimo(n);
    }
    if (e == 2)
    {
        printf("\nDigite o numero n1 e o numero n2");
        scanf("%i%i", &n1, &n2);
        x = intervaloPrimo(int n1, int n2);
    }
    return 0;
}

int ehPrimo(int n)
{
    int result = 0;

    for (int x = 2; x <= n / 2; x++)
    {
        if (n % x == 0)
        {
            result++;
        }
    }
    if
        return
}

int intervaloPrimo(int n1, int n2)
{
    for (int x = n1; x < n2; x++)
    {
        ehPrimo(x);
    }
}