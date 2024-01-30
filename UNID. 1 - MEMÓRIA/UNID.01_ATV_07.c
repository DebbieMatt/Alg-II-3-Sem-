#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define C 3

int main()
{
    int matrix[3][3], linha, coluna, soma = 1, somaSec = 1, determinante;

    srand(time(0));

    for (int linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {

            *(*(matrix + linha) + coluna) = rand() % 10;

            if (linha == coluna)
            { // diagonal principal multiplica

                soma *= *(*(matrix + linha) + coluna);
            }
            else if (coluna == C - linha - 1)
            { // multiplicação da diagonal secundaria

                somaSec *= *(*(matrix + linha) + coluna);
            }
        }
    }

    printf("\nMinha matriz:\n");

    /*impressão da matriz*/

    for (linha = 0; linha < 3; linha++)
    {

        printf("\n");

        for (coluna = 0; coluna < 3; coluna++)
        {

            printf("\t %d ", *(*(matrix + linha) + coluna));
        }
    }

    determinante = soma - somaSec;
    printf("\n%d", soma);
    printf("\n%d", somaSec);
    printf("\nA determinante eh: %d", determinante);
}