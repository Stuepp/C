#include <stdio.h>
#include <math.h>
#include <time.h>

float ehMenor(float a, float b, float c);
float Raizes(float a, float b, float c);
float pesoIdeal(float h, int x);
int votarHabilitacao(int ano);

int main(void)
{
    float a, b, c;
    int x;

    printf("\n(1)Ordem descrescente de 3 números\n(2)Raizes de uma equeção de segundo grau\n(3)Calculo de peso ideial\n(4)Já pode votar e tirar a habilitação?\n(5)\n(6)\n(7)\n(8)\n(9)");
    scanf("%i", &x);
    if (x == 1)
    {
        printf("\nDigite o 1, 2 e 3 valor: ");
        scanf("%f%f%f", &a, &b, &c);
        ehMenor(a, b, c);
    }
    if (x == 2)
    {
        printf("\nDigite a, b, c:");
        scanf("%f%f%f", &a, &b, &c);
        Raizes(a, b, c);
    }
    if (x == 3)
    {
        printf("\nDigite sua altura e sexo (1)-homem (2)-mulher:");
        float h;
        scanf("%f%i", &h, &x);
        pesoIdeal(h, x);
    }
    if (x == 4)
    {
        printf("\nDigite seu ano de nascimento: ");
        int ano;
        scanf("%i", &ano);
        votarHabilitacao(ano);
    }
}

float ehMenor(float a, float b, float c)
{
    if (a < b && a < c)
    {
        if (b < c)
        {
            return printf("\n%f %f %f", a, b, c);
        }
        else
        {
            return printf("\n%f %f %f", a, c, b);
        }
    }
    else if (b < a && b < c)
    {
        if (a < c)
        {
            return printf("\n%f %f %f", b, a, c);
        }
        else
        {
            return printf("\n%f %f %f", b, c, a);
        }
    }
    else if (c < a && c < b)
    {
        if (a < b)
        {
            return printf("\n%f %f %f", c, a, b);
        }
        else
        {
            return printf("\n%f %f %f", c, b, a);
        }
    }
}

float Raizes(float a, float b, float c)
{
    float delta = pow(b, 2) - (4 * a * c);

    if (delta < 0)
    {
        return printf("\nNão pertence aos reais");
    }
    else
    {
        float result1 = (-b + sqrt(delta)) / (2 * a);
        float result2 = (-b - sqrt(delta)) / (2 * a);
        return printf("\nRaizes:\n%f\n%f", result1, result2);
    }
}

float pesoIdeial(float h, int x)
{
    if (x == 1)
    {
        float ideal = (72.7 * h) - 58;
        return printf("\nSeu peso ideal: %f", ideal);
    }
    else
    {
        float ideal = (62.1 * h) - 44.7;
        return printf("\nSeu peso ideal: %f", ideal);
    }
}

int votarHabilitacao(int ano)
{
    /*tm_year
    time_t rawtime;
    struct tm *timeinfo;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("\n%s", asctime(timeinfo));*/
    return printf("\n%i", ano);
}