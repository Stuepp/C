#include <stdio.h>

int main(void)
{ //inicio

    int value;
    printf("\nEnter a number:\n");
    scanf("%i", &value); // guarda uma várivel, (tipo da váriavel, qual váriavel)
    if (value > 0)
    {
        if (value % 2 == 0)
        {
            printf("The number is even");
        }
        else
        {
            printf("The number you have entererd is odd\n");
            if (value < 20)
            {
                if (value % 3 == 0)
                {
                    printf("Is divisible by 3");
                }
            }
            if (value % 5 == 0)
            {
                printf("Is divisible by 5");
            }
        }
    }
    return 0;
} //fim