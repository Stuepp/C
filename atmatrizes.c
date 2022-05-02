#include <stdio.h>
#include <string.h>

int main (void){
    const int distancias[6][6] = {{0,63,210,190,0,190},{63,0,160,150,95,0},{210,160,0,10,0,0},{190,150,10,0,0,0},{0,95,0,0,0,80},{190,0,0,0,80,0}};
    const char cidades[6][10] = {{"Caceres"},{"BBugres"},{"Cuiaba"},{"VGrande"},{"Tangara"},{"PLacerda"}};
    char city1[10], city2[10];
    int aponta1, aponta2;
    int *p1 = &aponta1, *p2 = &aponta2;

    printf("Cidades: \n");
    for(int i = 0; i < 6; i++){
        printf(" %i  %s | ", i, cidades[i]);
    }
    printf("\n\n  Selecione sua rota, caso seja possivel sera dada a distancia (Cidade A a cidade B)\n");
    scanf("%s", &city1);
    scanf("%s", &city2);
    
    if(strcmp(city1, city2) == 0){
        printf("O usuario botou a cidade de partida tambem como cidade de destino, logo nao se tem uma distancia\n");
    } else {
        for(int i = 0; i < 6; i++){
            if(strcmp(city1, cidades[i]) == 0){
                *p1 = i;
            }
            if(strcmp(city2, cidades[i]) == 0){
                *p2 = i;
            }
        }
        for(int i = 0; i < 6; i++){
            for(int j = 0; j < 6; j++){
                if(*p1 == i && *p2 == j){
                    if(distancias[i][j] == 0){
                        printf("Sem rota");
                    }else{
                        printf("Distancia: %d \n", distancias[i][j]);
                    }     
                }
            }
        }
    }
}