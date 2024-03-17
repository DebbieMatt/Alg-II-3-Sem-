
#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct
{
    char nome[50];
    int ape;
} REGISTRO;

typedef struct
{
    REGISTRO registros[TAM];
    int topo;
} PILHA;

void inicializarPilha(PILHA *p)
{
    p->topo = 0;
}

void inserir(PILHA *p, REGISTRO r)
{
    if (p->topo < TAM)
    {
        p->registros[p->topo] = r;
        p->topo++;
    }
    else
    {
        printf("Pilha cheia!\n");
    }
}

void remover(PILHA *p)
{
    if (p->topo > 0)
    {
        p->topo--;
    }
}

void imprimir(PILHA p)
{
    for (int i = p.topo - 1; i >= 0; i--)
    {
        printf("%d. Nome:%s | Apartamento:%d\n ", i, p.registros[i].nome, p.registros[i].ape);
    }
}

int main(void)
{
    PILHA p;
    inicializarPilha(&p);
    inserir(&p, (REGISTRO){"João", 123});
    inserir(&p, (REGISTRO){"Maria", 240});
    inserir(&p, (REGISTRO){"Carlos", 850});
    remover(&p);
    inserir(&p, (REGISTRO){"Mateus", 715});
    imprimir(p);
    return 0;
}
