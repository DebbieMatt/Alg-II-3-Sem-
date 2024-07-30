#include <stdio.h>
#include <stdlib.h>

typedef struct
{
        int *data;
        int size;
        int capacity;
} TAD;

TAD *criarTAD(int capacity)
{
        TAD *tad = (TAD *)malloc(sizeof(TAD));

        if (!tad)
        {
                fprintf(stderr, "Falha em alocar dinamicamente na memória.\n");
                exit(EXIT_FAILURE);
        }

        tad->capacity = capacity;
        tad->data = (int *)malloc(tad->capacity * sizeof(int));

        if (!tad->data)
        {
                fprintf(stderr, "Falha em alocar dinamicamente na memória.\n");
                free(tad);
                exit(EXIT_FAILURE);
        }

        return tad;
}

void freeTAD(TAD *tad)
{
        if (tad)
        {
                free(tad->data);
                free(tad);
        }
}

void addItem(TAD *tad, int item)
{
        if (tad->size == tad->capacity)
                tad->capacity *= 2;

        tad->data[tad->size++] = item;
}

void removeItem(TAD *tad, int item)
{
        for (int i = 0; i < tad->size; i++)
        {
                if (tad->data[i] == item)
                {
                        for (int j = i; j < tad->size - 1; j++)
                        {
                                tad->data[j] = tad->data[j + 1];
                        }
                        tad->size--;
                        return;
                }
        }
        printf("Item não encontrado.\n");
}

int buscarItem(TAD *tad, int item)
{
        for (int i = 0; i < tad->size; i++)
        {
                if (tad->data[i] == item)
                {
                        return i;
                }
        }
        return -1;
}

void exibir(TAD *tad)
{
        for (int i = tad->size; i >= 0; i--)
        {
                printf("Item na posição: %d Valor: %d\n", i, tad->data[i]);
        }
}

int main()
{
        TAD *t = criarTAD(50);
        int opcao, item, pos;

        do
        {
                printf("1. Inserir item\n");
                printf("2. Remover item\n");
                printf("3. Buscar item\n");
                printf("4. Exibir itens\n");
                printf("5. Sair\n");
                printf("Escolha uma opção: ");
                scanf("%d", &opcao);

                switch (opcao)
                {
                case 1:
                        printf("Digite um item para inserir: ");
                        scanf("%d", &item);
                        addItem(t, item);
                        break;
                case 2:
                        printf("Digite um item para remover: ");
                        scanf("%d", &item);
                        removeItem(t, item);
                        break;
                case 3:
                        printf("Digite um item para buscar: ");
                        scanf("%d", &item);
                        pos = buscarItem(t, item);
                        if (pos != -1)
                        {
                                printf("Item encontrado na posição %d.\n", pos);
                        }
                        else
                        {
                                printf("Item não encontrado.\n");
                        }
                        break;
                case 4:
                        exibir(t);
                        break;
                case 5:
                        printf("Encerrando o programa...\n");
                        break;
                default:
                        printf("Opção inválida!\n");
                        break;
                }
        } while (opcao != 4);
}