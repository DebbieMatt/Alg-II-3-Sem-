#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    return strcmp(*(const char **)a, *(const char **)b);
}

int main()
{
    const int NUM_STRINGS = 4;
    char *strings[] = {"RONDONOPOLIS", "CUIABA", "AMORINOPOLIS", "DIORAMA"};

    printf("Antes da ordenação:\n");
    for (int i = 0; i < NUM_STRINGS; i++)
    {
        printf("%s\n", strings[i]);
    }

    qsort(strings, NUM_STRINGS, sizeof(char *), compare);

    printf("\nDepois da ordenação:\n");
    for (int i = 0; i < NUM_STRINGS; i++)
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}
