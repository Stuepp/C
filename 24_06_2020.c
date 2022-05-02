#include <stdio.h>
#include <math.h>

float segundo_grau(float a, float b, float c);

int main(void)
{
    float a, b, c;
    printf("\nDigite 'a' 'b' e 'c', para saber as raizes de uma equacao de segundo grau");
    printf("\na:\nb:\nc:");
    scanf("%f%f%f", &a, &b, &c);
    segundo_grau(a, b, c);
}

float segundo_grau(float a, float b, float c)
{
    float delta = pow(b, 2) - (4 * a * c);
    if (delta < 0 || delta == 0)
    {
        printf("\nNao possui raizes, ou nao possui raizes reais");
    }
    else
    {
        printf("\n%f", delta);
        float x1 = (-b + delta) / (2 * a);
        float x2 = (-b - delta) / (2 * a);
        printf("\n X1: %f, X2: %f", x1, x2);
    }
}