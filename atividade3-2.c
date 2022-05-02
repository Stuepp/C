#include <stdio.h>

int main()
{

    int A[9], B[9], C[9], NOVO[9], i;

    printf("Insira os valores do Vetor A");

    for (i = 0; i < 9; i++)
    {
        printf("\n(%i)", i);
        scanf("%i", &A[i]);
    }

    printf("\nInsira os valores do Vetor B");

    for (i = 0; i < 9; i++)
    {
        printf("\n(%i)", i);
        scanf("%i", &B[i]);
    }

    printf("\nInsira os valores do Vetor C");

    for (i = 0; i < 9; i++)
    {
        printf("\n(%i)", i);
        scanf("%i", &C[i]);
    }

    for (i = 0; i < 3; i++)
    {
        NOVO[i] = A[i];
    }

    for (i = 3; i < 6; i++)
    {
        NOVO[i] = B[i];
    }

    for (i = 6; i < 9; i++)
    {
        NOVO[i] = C[i];
    }

    printf("\n{");
    for (i = 0; i < 9; i++)
    {
        if (i == 8)
        {
            printf("%i", NOVO[i]);
        }
        else
        {
            printf("%i,", NOVO[i]);
        }
    }
    printf("}");
}