#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void imprimir(int tabuleiro[MAX][MAX]);

int main()
{
    int tabuleiro[MAX][MAX];
    int i, j;

    // Zerando Tabuleiro
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionando Navio na horizontal
    for (i = 7; i < 10; i++)
    {
        for (j = 7; j < 10; j++)
        {
            if (i % 3 == 0)
            {
                tabuleiro[i][j] = 3;
            }
        }
    }

    // Posicionando Navio na vertical

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j % 3 == 0)
            {
                tabuleiro[i][j] = 3;
            }
        }
    }

    // Posicionando Navio 1 na diagonal

    for (i = 3; i < 6; i++)
    {
        i, i, tabuleiro[i][i] = 3;
    }

    // Posicionando Navio 2 na diagonal

    j = 3;
    for (i = 6; i < 9; i++)
    {
        i, j, tabuleiro[i][j] = 3;
        j--;
    }

    // iniciando o jogo
    printf("JOGO BATALHA NAVAL \n");
    printf("\n");
    imprimir(tabuleiro);
}

void imprimir(int tabuleiro[MAX][MAX])
{
    int i, j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}