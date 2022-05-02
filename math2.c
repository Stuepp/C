#include <stdio.h>

int main(void){
    int num, posicao;
    int v[10], n[10];

    printf("num:\n");
    scanf("%d", &num);
    
    for(int i = 0; i < 10; i++){
        printf("array in %i: ", i);
        scanf("%d", &v[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        if(num == v[i])
            printf("%i está na posicao %i do vetor", num, i);
    }

    for(int i = 0; i < 10; i++){
        n[i] = v[i];
        if(n[i] < 0)
            n[i] = n[i] * -1;
        n[i] = n[i] - num;
        if(n[i] < 0)
            n[i] = n[i] * -1;
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 20; j++){
            if(n[i] < n[j]){
                int temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        if((n[0]+num) == n[i]){
            printf("O valor mais proximo eh %i na posicao %i", n[0]+num, i);
        }
        if(((n[0]+num)*-1) == n[i]){
            printf("O valor mais proximo eh %i na posicao %i", (n[0]+num)*-1, i);
        }
    }
}