#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int particiona(int *v, int start, int end)
{                                                              // QUICK SORT
    int pivo = (v[start] + v[end] + v[(start + end) / 2]) / 3; // PERCORRE DA DIREITA P/ ESQUERDA, DEPOIS DA ESQUERDA P/ DIREITA;

    while (start < end)
    {
        while ((start < end) && (v[start] <= pivo))
        {
            start = start + 1;
        }
        while ((start < end) && (v[end] > pivo))
        {
            end = end - 1;
        }
        if (start < end)
        {
            int aux = v[start];
            v[start] = v[end];
            v[end] = aux;
        }
    }
    return start;
}

void quickSort(int *v, int start, int end)
{
    if (start < end)
    {
        int quite = particiona(v, start, end);
        quickSort(v, start, quite - 1);
        quickSort(v, quite + 1, end);
    }
}

void imprimir(int *v)
{

    printf("\nMeu vetor ordenado:\n");

    for (int linha = 0; linha < 15; linha++)
    {

        printf(" %d ", v[linha]);
    }
}

int main()
{
    int vetor[15];

    srand(time(0));

    for (int linha = 0; linha < 15; linha++)
    {

        vetor[linha] = rand() % 100;
    }

    printf("\nMeu vetor aleatório:\n");

    /*impressão da vetor*/

    for (int linha = 0; linha < 15; linha++)
    {

        printf(" %d ", vetor[linha]);
    }

    // imprimir(vetor); ORDEM DECRESCENTE
    quickSort(vetor, 0, 14);
    imprimir(vetor);

    return 0;
}
