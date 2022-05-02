#include <stdio.h>

int main(void)
{

    float n1, n2, average;
    char name[20];
    int numstudent;
    numstudent = 1;

    while (numstudent <= 3)
    {
        printf("\nEnter the name and the 2 scores of the student:\n");
        scanf("%s", name);
        scanf("%f%f", &n1, &n2);

        average = (n1 + n2) / 2;

        printf("\n%s has gotten %.1f as average\n", name, average);
        numstudent = numstudent + 1;
    }
    return 0;
}
