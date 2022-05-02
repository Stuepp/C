#include <stdio.h>

int main (void) {
    int matriz[3][3], posicaoL = 0, posicaoC = 0, hachadura, menor;

    //le matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%i", &matriz[i][j]);
        }
    }
    printf("Matriz\n");
    //printa matriz
    for(int i = 0; i < 3; i++){
        printf("\n");
        for(int  j = 0; j < 3; j++){
            printf("\t %d", matriz[i][j]);
        }
    }
    printf("\nValores da area escura\n");
    //hachadura
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i > j && i != 0)
                hachadura = matriz[i][j];
        }
    }
    //print hachadura
    printf("\n%d", hachadura);

    //Menor valor
    menor = matriz[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(matriz[i][j] < menor){
                menor = matriz[i][j];
                posicaoL = i;
                posicaoC = j;
            }
        }
    }
    printf("\n\nMenor valor: %d na posicao [%d,%d]\n", menor, posicaoL, posicaoC);
}