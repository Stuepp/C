#include <stdio.h>

int main(void)
{

    int x;
    float H, aux;
    H = 0;
    aux = 0;
    for (x = 1; x <= 50; x++)
    {
        aux = (2 * x - 1) / (float)x;

        H = H + aux;
    }
    printf("H = %.2f", H);

    return 0;
}