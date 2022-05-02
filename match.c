#include <stdio.h>

int main (void){
    int num, v[10], contador = 0, posicao,dif[10],menor;

    scanf("%i", &num);
    for(int i = 0; i <= 10; i++){
        scanf("%i", &v[i]);
    }

    for(int i = 0; i <= 10; i++){
        if(num == v[i]){
            posicao = i;
            printf("%i esta na posicao %i\n", num, posicao);
        }
    }
    for(int i = 0; i <= 10; i++){
            dif[i] = v[i] - num;
    }
    for(int i = 0; i <=10; i++){
        for(int j = 0; j <= 10; j++){
            if(dif[i] < dif[j]){
                int temp = dif[i];
                dif[i] = dif[j];
                dif[j] = temp;
            }
        }
    }
    for(int i = 0; i <= 10; i++){
        if(v[i] == (dif[0]+num)){
            pritnf("O numero mais proximo de %i, %i, esta na posicao %i\n", num, v[i], i);
        }
    }
}