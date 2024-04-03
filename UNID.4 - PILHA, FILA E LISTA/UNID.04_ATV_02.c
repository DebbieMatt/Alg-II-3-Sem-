#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pilha
{
    int topo;
    unsigned capacidade;
    char **array;
} Pilha;

Pilha *criarPilha(unsigned capacidade)
{
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));
    pilha->capacidade = capacidade;
    pilha->topo = -1;
    pilha->array = (char **)malloc(pilha->capacidade * sizeof(char *));
    return pilha;
}

void empilhar(Pilha *pilha, char *item)
{
    if (pilha->topo == pilha->capacidade - 1)
        return;
    pilha->array[++pilha->topo] = item;
}

char *desempilhar(Pilha *pilha)
{
    if (pilha->topo == -1)
        return NULL;
    return pilha->array[pilha->topo--];
}

void exibir(Pilha *pilha)
{
    for (int i = pilha->topo; i >= 0; i--)
    {
        printf("%s\n", pilha->array[i]);
    }
}

int main()
{
    Pilha *playlist = criarPilha(100);
    Pilha *musicasRemovidas = criarPilha(100);

    // Adicionando músicas
    empilhar(playlist, "Música 1");
    empilhar(playlist, "Música 2");
    empilhar(playlist, "Música 3");

    // Desfazendo a adição da última música
    empilhar(musicasRemovidas, desempilhar(playlist));

    // Refazendo a adição da última música removida
    empilhar(playlist, desempilhar(musicasRemovidas));

    // Exibindo a playlist
    exibir(playlist);

    return 0;
}
