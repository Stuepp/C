#include <stdio.h>

int PrimeNumber(int n);
int interval(int n1, int n2);

int main(void)
{
    int e, n, n1, n2;

    printf("\n(1) to see if one number is a prime number \n(2) to see which number are prime numbers in the interval of n1 and n2 \n");
    scanf("%i", &e);
    if (e == 1)
    {
        printf("\nType a number to see if is a prime number ");
        scanf("%i", &n);
        PrimeNumber(n);
    }
    if (e == 2)
    {
        printf("\nType the number n1 and n2");
        scanf("%i%i", &n1, &n2);
        interval(n1, n2);
    }
}

int PrimeNumber(int n)
{
    int result = 0;

    for (int x = 2; x <= n / 2; x++)
    {
        if (n % x == 0)
        {
            result++;
            break;
        }
    }
    if (result == 0)
    {
        printf("\n%i is a prime number ", n);
    }
    else
    {
        printf("\n%i isn't a prime number ", n);
    }
    return 0;
}

int interval(int n1, int n2)
{
    for (int x = n1; x < n2; x++)
    {
        PrimeNumber(x);
    }
}