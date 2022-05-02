#include <stdio.h>

int main (void){
    int matrizPrincipal[12][12], quadrante1[6][6], quadrante2[6][6], quadrante3[6][6], quadrante4[6][6], maiorNum = 0, posicaoL, posicaoC;

    //matrizPrincipal
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            matrizPrincipal[i][j] = j;
        }
    }
    //quadrantes
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            quadrante1[i][j] = 0;
            quadrante2[i][j] = 0;
            quadrante3[i][j] = 0;
            quadrante4[i][j] = 0;
        }
    }
    //quadrante1
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(i >= j)
                quadrante1[i][j] = matrizPrincipal[i][j];
        }
    }
    //quadrante2
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(i + j >= 5)
                quadrante2[i][j] = matrizPrincipal[i][j+6];
        }
    }
    //quadrante3
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(i + j <= 5)
                quadrante3[i][j] = matrizPrincipal[i+6][j];
        }
    }
    //quadrante4
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(i <= j)
                quadrante4[i][j] = matrizPrincipal[i+6][j+6];
        }
    }
    //maior
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(quadrante1[i][j] > maiorNum){
                maiorNum = quadrante1[i][j];
                posicaoL = i;
                posicaoC = j;
            }
            if(quadrante2[i][j] > maiorNum){
                maiorNum = quadrante1[i][j];
                posicaoL = i;
                posicaoC = j;
            }
            if(quadrante3[i][j] > maiorNum){
                maiorNum = quadrante1[i][j];
                posicaoL = i;
                posicaoC = j;
            }
            if(quadrante4[i][j] > maiorNum){
                maiorNum = quadrante1[i][j];
                posicaoL = i;
                posicaoC = j;
            }
        }
    }
    //fim
    printf("O maior numero da hachadura eh %d na posicao [%d,%d]\n", maiorNum, posicaoL, posicaoC);
}