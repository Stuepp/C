#include <stdio.h>

int main(void){
    int k[20] = {1,20,30,40,50,60,70,80,90,10,11,12,13,14,15,16,17,18,19,20};

    for(int i = 0; i < 20; i++){
            if(i % 2 != 0 && (i+1) % 2 == 0){
                int temp = k[i];
                k[i] = k[(i+1)];
                k[(i+1)] = temp;
            }
    }
    //
    for(int i = 0; i < 20; i++){
        printf(" ,%i", k[i]);
    }
}