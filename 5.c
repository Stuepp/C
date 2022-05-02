#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y, numdiv, i;
    x = 0;
    while (x <= 39)
    {
        y = pow(x, 2) + x + 41;
        printf("\nY= %i", y);
        x = x + 1;
    }
    return 0;
}