#include <stdio.h>

int main(void)
{
    int v1 = 0, v2 = 1, vnext, x = 1, xvezes;
    printf("\nDigite quantas vezes ira fazer o fibonacci:\n");
    scanf("%i", &xvezes);

    while (x <= xvezes)
    {
        printf("%i, ", v1);
        vnext = v1 + v2;
        v1 = v2;
        v2 = vnext;
        x++;
    }
    printf("\nValor é: %i", v1); /*está puxando o lugar da memória não o valor*/
}