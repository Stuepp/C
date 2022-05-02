
#include <stdio.h>

int main(void)
{
    int num, i, numdiv;
    printf("\nEnter a number:\n");
    printf("\n");
    scanf("%i", &num);
    numdiv = 0;

    for (i = 1; i <= num; i = i + 1)
    {
        if (num % i == 0)
        {
            printf("\n%i is divisible by %i\n", num, i);
            numdiv = numdiv + 1;
        }
    }
    printf("\nThe number has %i dividers\n", numdiv);

    if (numdiv == 2)
    {
        printf("\nThe number %i is prime\n", num);
    }
    else
    {
        printf("\nThe number %i is not prime", num);
    }
    return 0;
}