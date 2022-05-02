#include <stdio.h>
#include <math.h>

int main(void)
{
    int perfeito, n[5] = {2, 3, 5, 7, 11};

    for (int i = 0; i < 5; i++)
    {
        perfeito = pow(2, (n[i] - 1)) * (pow(2, n[i]) - 1);
        printf("\n perfeito %i %i", i + 1, perfeito);
    }
}
