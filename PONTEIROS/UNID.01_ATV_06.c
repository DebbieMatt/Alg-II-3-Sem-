#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5], vetor[5], *p;

    // inserindo

    for (int i = 0; i < 5; i++)
    {
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // preenchendo

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 1; j++)
        {

            *(*(matriz + i) + j) = *(vetor + i);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j < 2; j++)
        {

            *(*(matriz + i) + j) = *(vetor + i) * 2;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 2; j < 3; j++)
        {

            *(*(matriz + i) + j) = *(vetor + i) * 3;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 3; j < 4; j++)
        {

            *(*(matriz + i) + j) = *(vetor + i) * 4;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j < 5; j++)
        {

            *(*(matriz + i) + j) = *(vetor + i) * 5;
        }
    }

    printf("\nMinha matriz:\n");

    /*impressão da matriz*/

    for (int i = 0; i < 5; i++)
    {

        printf("\n");

        for (int j = 0; j < 5; j++)
        {

            printf("\t %d", *(*(matriz + i) + j));
        }
    }
}