//  O código gera um vetor de 100 números aleatórios entre 0 e 999 e os ordena em ordem decrescente usando o quicksort com pivô randômico.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void troca(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int particao(int arr[], int baixo, int alto)
{
    srand(time(NULL)); // Inicializa a semente para a função rand()
    int pivoIndex = baixo + rand() % (alto - baixo + 1); // Escolhe um índice randômico
    troca(&arr[baixo], &arr[pivoIndex]); // Troca o pivo randômico com o primeiro elemento

    int pivo = arr[baixo];
    int i = (baixo + 1);
    int j = alto;

    while (1)
    {
        while (i <= j && arr[i] > pivo)
            i++;
        while (arr[j] < pivo)
            j--;
        if (i >= j)
            break;
        else
            troca(&arr[i], &arr[j]);
    }
    troca(&arr[baixo], &arr[j]);
    return j;
}

void quickSort(int arr[], int baixo, int alto)
{
    if (baixo < alto)
    {
        int pi = particao(arr, baixo, alto);
        quickSort(arr, baixo, pi - 1);
        quickSort(arr, pi + 1, alto);
    }
}

void imprimirArray(int arr[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    srand(time(NULL)); // Inicializa a semente para a função rand()
    int arr[100];
    for (int i = 0; i < 100; i++)
        arr[i] = rand() % 1000; // Preenche o vetor com números aleatórios de 0 a 999

    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("Array ordenado em ordem decrescente: \n");
    imprimirArray(arr, n);
    return 0;
}
