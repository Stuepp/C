//Adilson Krischanski && Brian Laus Bertemes 
#include <stdio.h>
#include <stdlib.h>
#define L 12
#define C 12
#define S 6

int main(void){

    int v[L][C]={1, 2, 3, 4, 5, 600, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 
                    81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 950, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,144};
    int Q1[S][S], Q2[S][S], Q3[S][S], Q4[S][S];
    int iL,iC,maior1,maior2,maior3,maior4;
    int pm1,pm2,pm3,pm4;
    int pl1,pl2,pl3,pl4;

    /*for(iL=0;iL<L;iL++){//lendo a matriz pricipal
        for(iC=0;iC<C;iC++){
            scanf("%i",&v[iL][iC]);
        }
    }*/


   for(iL=0; iL<S; iL++){//quadrante 1
        for(iC=0; iC<S; iC++){
            Q1[iL][iC] = v[iL][iC];
        }
    }
   for(iL=0; iL<S; iL++){//quadrante 2
        for(iC=0; iC<S; iC++){
            Q2[iL][iC] = v[iL][iC+6];
        }
    }
   for(iL=0; iL<S; iL++){//quadrante 3
        for(iC=0; iC<S; iC++){
            Q3[iL][iC] = v[iL+6][iC];
        }
    }
   for(iL=0; iL<S; iL++){//quadrante 4
        for(iC=0; iC<S; iC++){
            Q4[iL][iC] = v[iL+6][iC+6];
        }
    }

    //inicialização das matrizes auxiliares
    maior1=Q1[0][0];
    pm1=0;
    pl1=0;
    maior2=Q2[0][5];
    pm2=0;
    pl2=5;
    maior3=Q3[0][0];
    pm3=0;
    pl3=0;
    maior4=Q4[0][0];
    pm4=0;
    pl4=0;

    /*for(iL=0; iL<S;iL++){ // prints de teste
        printf("\n");
        for(iC=0; iC<S; iC++){
            printf("%i\t",Q3[iL][iC]);
        }
    }*/

     for(iL=0; iL<S; iL++){
        for(iC=0; iC<S; iC++){
            if(iL>=iC){
                if(Q1[iL][iC]>maior1){//teste maior elemento q1
                    maior1=Q1[iL][iC];
                    pm1=iC;
                    pl1=iL;

                }
            }
            if(iL<=iC){
                if(Q4[iL][iC]>maior4){//teste maior elemento q4
                    maior4=Q4[iL][iC];
                    pm4=iC;
                    pl4=iL;
                }

            }
            if(iL+iC>= S-1){
                if(Q2[iL][iC]>maior2){//teste maior elemento q2
                    maior2=Q2[iL][iC];
                    pm2=iC;
                    pl2=iL;
                }
            }
            if(iL+iC<= S-1){//teste maior elemento q3
                if(Q3[iL][iC]>maior3){
                    maior3=Q3[iL][iC];
                    pm3=iC;
                    pl3=iL;
                }

            }
        }


    }

    //analize final
    if(maior1>maior2 && maior1>maior3 && maior1>maior4){
        printf("o maior Valor  e %i e  esta na prosicao v[%i][%i]",maior1,pl1,pm1);
    }
    if(maior2>maior1 && maior2>maior3 && maior2>maior4){
        printf("o maior Valor  e %i e  esta na prosicao v[%i][%i]",maior2,pl2,(pm2+6));
    }

    if(maior3>maior1 && maior3>maior2 && maior3>maior4){
        printf("o maior Valor  e %i e  esta na prosicao v[%i][%i]",maior3,(pl3+6),pm3);
    }
    if(maior4>maior1 && maior4>maior2 && maior4>maior3){
        printf("o maior Valor  e %i e  esta na prosicao v[%i][%i]",maior4,(pl4+6),(pm4+6));
    }

    return 0;
}