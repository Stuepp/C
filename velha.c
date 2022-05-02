#include <stdio.h>
#include <conio.h> //O que é?

typedef struct Player //Cria um struct para armazenar os dados de uma pessoa/tipo objeto em JAVA
{
    char name[10];
    int score;
};

int main(void)
{

    //Criando a váriavel que será o tipo struct Player
    struct Player p1;
    struct Player p2;

    //variveis
    int cruz, bola, x[4], y[4];

    printf("\nEsse eh um jogo da velha entre dois jogadores");
    printf("\nEnsira o nome do primeiro jogador, o que vai ser o circulo:\n(Maximo 9 caracteres)\n");
    fflush(stdin); //O que é?
    /*Usaremos o comando fgets() para ler strings, no caso o nome do player
    fgets (varaiavel, tamanho da string, entrada)
    como lendo do teclado a entrada é stdin (entrada padrão), porém em outro caso, a entrada poderia ser um arquivo
    */
    fgets(p1.name, 10, stdin);
    printf("\nEnsira o nome do segundo jogador, o que vai ser o X:\n(Maximo 9 caracteres)\n");
    fflush(stdin);
    fgets(p2.name, 10, stdin);

    printf("\n-------JOGO DA VELHA------");
    printf("\n");
    for (int p = 0; p < 2; p++)
    {
        if (p == 0)
        {
            printf("\nJogador 1 (Circulo)");
        }
        else
        {
            printf("\nJogador 2 (X)");
        }
        printf("  digite a posicao X e Y que gostaria de ocupar:");
        scanf("%i%i", &x[p], &y[p]);
        printf("\n");

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (x[j] == j && y[i] == i)
                {
                    printf("|X|");
                }
                else
                {
                    printf("|%i|", j);
                }
            }
            printf("\n");
        }
    }
}