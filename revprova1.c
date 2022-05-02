#include <stdio.h>

int main(void)
{
    float a, b;
    char res;

    printf("\nDigie 2 numeros:");
    scanf("%f%f", &a, &b);
    printf("\nChoose an option you want to do: sum (+) division (/) difference (-) multiplication (x)\n");
    scanf(" %c", &res);

    if (res == '+')
    {
        float result = a + b;
        printf("\nThe result of the sum of %f %f is %f", a, b, result);
    }
    else if (res == '/')
    {
        float result = a / b;
        printf("\nThe result of the division in %f %f is %f", a, b, result);
    }
    else if (res == '-')
    {
        float result = a - b;
        printf("\nThe result of the difference in %f %f is %f", a, b, result);
    }
    else if (res == 'x')
    {
        float result = a * b;
        printf("\nThe result of multiplication in %f %f is %f", a, b, result);
    }
    return 0;
}