#include <stdio.h>

int main(void)
{

    int f, i;
    float c;

    for (f = 50; f <= 150; f = f + 1)
    {
        c = (5.0 * (f - 32.0)) / 9.0;
        printf("\n_     __\n");
        printf("| %i fahrenheit |    | %.2f graus celsius |", f, c);
    }
    return 0;
}
