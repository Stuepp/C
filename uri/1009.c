#include <stdio.h>

int main (void){

    char name[30];
    float FixedSalary, totalSale, totalSalary;
    
    //printf("\nName:");
    scanf(" %s", &name);
    //printf("\nFixed Salary:");
    scanf("%f", &FixedSalary);
    //printf("\nTotal Sale:");
    scanf("%f", &totalSale);
    totalSalary = (totalSale * 0.15) + FixedSalary;
    printf("TOTAL = R$ %.2f\n", totalSalary);
}