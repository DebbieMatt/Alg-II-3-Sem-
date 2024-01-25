/* Problema das matrizes ---------------- */
#include <stdio.h>
#define N 10

int main()
{
    int matriz[N][N];
    int *p;
    int i, j, soma = 0;

    p = &matriz[0][0]; /* Inicializa o ponteiro no inicio da matriz */

    /* Inicializando a matriz com zeros.. */
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
        {
            *p = 0;
            p++;
        }

    /* Preenchendo a matriz com numeros */
    p = &matriz[0][0];
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
        {
            *p = soma;
            soma++;
            p++;
        }

    /*impressão da matriz*/

    for (int i = 0; i < N; i++)
    {

        printf("\n");

        for (int j = 0; j < N; j++)
        {

            printf("\t %d", *(*(matriz + i) + j));
        }
    }
}