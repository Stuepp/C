#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

//prototipo de função
float volume_esfera(float r);
float distancia_2_pontos(float x1, float x2, float y1, float y2);
int valores_pares(int *vetor);

int main(void)
{
    float r, x1, x2, y1, y2;
    int answear, vetor[10];

    printf("\nO que voce quer calcular?");
    printf("\n(1)Volume de uma esfera?\n(2)Distancia entre dois pontos?\n(3)Valores pares dentro de um vetor\n(4)Posicao dos pares dentro de um vetor\n(5)Menor valor de um vetor\n");
    scanf("%i", &answear);
    if (answear == 1)
    {
        printf("\nQual eh o tamnho do raio?\n");
        scanf("%f", &r);
        float volume = volume_esfera(r);
        printf("O volume da esfera eh: %f", volume);
    }
    else if (answear == 2)
    {
        printf("\nInforme a posição do primeiro ponto\nX: \nY: \n");
        scanf("%f%f", &x1, &y1);
        printf("\nInforme a posição do 2º ponto\nX: \nY: \n");
        scanf("%f%f", &x2, &y2);
        float d = distancia_2_pontos(x1, x2, y1, y2);
        printf("\nA distancia eh: %f", d);
    }
    else if (answear == 3)
    {
        printf("\nDigite os numeros que voce quer dentro da array");
        for (int x = 0; x < 10; x++)
        {
            printf("\nDigite o valor da posicao %i ", x);
            scanf("%i", &vetor[x]);
        }
        valores_pares(vetor);
    }
    else if (answear == 4)
    {
        printf("\nDigite os numeros que voce quer dentro da array");
        for (int x = 0; x < 10; x++)
        {
            printf("\nDigite o valor da posicao %i ", x);
            scanf("%i", &vetor[x]);
        }
        posicoes_pares(vetor);
    }
    else if (answear == 5)
    {
        printf("\nDigite os numeros que voce quer dentro da array");
        for (int x = 0; x < 10; x++)
        {
            printf("\nDigite o valor da posicao %i ", x);
            scanf("%i", &vetor[x]);
        }
        printf("\n%i", menor_num(vetor));
    }

    return 0;
}

float volume_esfera(float r)
{
    float V = (4 * M_PI * pow(r, 3)) / 3;
    return V;
}

float distancia_2_pontos(float x1, float x2, float y1, float y2)
{
    float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return d;
}

int valores_pares(int *vetor)
{
    printf("\nOs umeros pares sao: ");
    for (int x = 0; x < 10; x++)
    {
        if (vetor[x] % 2 == 0)
        {
            printf("\n%i", vetor[x]);
        }
    }
}

int posicoes_pares(int *vetor)
{
    for (int x = 0; x < 10; x++)
    {
        if (vetor[x] % 2 == 0)
        {
            printf("\n%i", x);
        }
    }
}

int menor_num(int *vetor)
{
    int menor = vetor[0];
    for (int x = 0; x < 10; x++)
    {
        if (menor > vetor[x])
        {
            menor = vetor[x];
        }
    }
    return menor;
}