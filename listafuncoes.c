#include <stdio.h>

int produto_notavel(int a, int b);
int soma2(int a, int b);

int main (void){
    int a,b,c,n;

    scanf("%i%i", &a,&b);
    printf("%i\n", produto_notavel(a,b));

    if(a > 0 &&b > 0){
        printf("%i\n", soma(a,b));
    }
    scanf("%i%i%i", &a, &b, &c);
    printf("%i\n", soma3(a,b,c));

    scanf("%i", &n);
    for(int i = 1; i <= n; i++){
        soma2(i,(i-1));
    }
}

int produto_notavel(int a, int b){
    int pn = (a*a) + (2*a*b) + (b*b);

    return pn;
}

int soma2(int a, int b){
    int soma = a + b;

    return soma;
}

int soma3(int a, int b, int c){
    int soma = a + b + c;

    return soma;
}

//