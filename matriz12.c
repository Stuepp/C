#include<stdio.h>

int main(void){
    int matriz[11][11], matriz1[5][5], matriz2[5][5], matriz3[5][5], matriz4[5][5], hachadura[93], pos;

    //matriz
    for(int i = 0; i < 11; i++){
        for(int j = 0; j <11; j++){
            matriz[i][j] = j;
        }
    }

    //matriz1
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < i; j++){
            matriz1[i][j] = matriz[i][j];
        }
    }
    //matriz2
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < i; j++){
            matriz2[i][j] = matriz[i][j+6];
        }
    }
    //matriz3
    for(int j = 0; j > 5; j++){
        for(int i = 0; i < j; i++){
            matriz3[i][j] = matriz[i+6][j];
        }
    }
    //matriz4
    for(int j = 0; j > 5; j++){
        for(int i = 0; i < j; i++){
            matriz4[i][j] = matriz[i+6][j+6];
        }
    }
    //pt1
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            hachadura[i+j] = matriz1[i][j];
        }
    }
    //pt2
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            hachadura[i+6+j] = matriz2[i][j];
        }
    }
    //pt3
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            hachadura[i+12+j] = matriz1[i][j];
        }
    }
    //pt4
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            hachadura[i+18+j] = matriz1[i][j];
        }
    }
    //
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            if(hachadura[i] > hachadura[j]){
                int temp = hachadura[i];
                pos = i;
                hachadura[i] = hachadura[j];
                hachadura[j] = temp;
            }
        }
    }
    //
    printf("Maior %i na posicao %i", hachadura[0], pos);
}