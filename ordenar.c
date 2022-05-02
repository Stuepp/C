#include <stdio.h>

int main (void){
    int k[20] = {1,20,30,40,50,60,70,80,90,10,11,12,13,14,15,16,17,18,19,20};

    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            if(k[i] < k[j]){
                int temp = k[i];
                k[i] = k[j];
                k[j] = temp;
            }
        }
    }
    //
    for(int i = 0; i < 20; i++){
        printf(" ,%i", k[i]);
    }
}