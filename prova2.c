#include <stdio.h>
#include <math.h>

int pncubo( int a, int b);

int main(void) {
    int a,b;

    scanf("%i%i", &a, &b);

    pncubo(a, b);
}

int pncubo( int a, int b){
    int resultado = pow(a,3) + (3*(pow(a,3) * b)) + (3*(pow(b,3) * a)) + pow(b,3);

    printf("%i",resultado);

    return resultado;
}