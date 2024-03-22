#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    float valor;
    int qtd;
} Produto;

Produto produtos[10];
int codigo = 0;

void cadastrar()
{
    if (codigo < 10)
    {
        printf("Digite o nome do produto: ");
        scanf("%s", produtos[codigo].nome);
        printf("Digite o valor do produto: ");
        scanf("%f", &produtos[codigo].valor);
        printf("Digite a quantidade do produto: ");
        scanf("%d", &produtos[codigo].qtd);
        codigo++;
    }
    else
    {
        printf("Não há espaço para mais produtos.\n");
    }
}

int compareNome(const void *a, const void *b)
{
    Produto *produtoA = (Produto *)a;
    Produto *produtoB = (Produto *)b;
    return strcmp(produtoA->nome, produtoB->nome);
}

int compareValorCrescente(const void *a, const void *b)
{
    Produto *produtoA = (Produto *)a;
    Produto *produtoB = (Produto *)b;
    return produtoA->valor - produtoB->valor;
}

int compareValorDecrescente(const void *a, const void *b)
{
    return compareValorCrescente(b, a);
}

void listar(int (*compare)(const void *, const void *))
{
    qsort(produtos, codigo, sizeof(Produto), compare);
    for (int i = 0; i < codigo; i++)
    {
        printf("Nome do Produto: %s,Valor do Produto: %.2f, Quant: %d\n", produtos[i].nome, produtos[i].valor, produtos[i].qtd);
    }
}

void excluir()
{
    char nome[50];
    printf("Digite o nome do produto a ser excluído: ");
    scanf("%s", nome);
    int i;
    for (i = 0; i < codigo; i++)
    {
        if (strcmp(produtos[i].nome, nome) == 0)
        {
            break;
        }
    }
    if (i < codigo)
    {
        for (int j = i; j < codigo - 1; j++)
        {
            produtos[j] = produtos[j + 1];
        }
        codigo--;
    }
    else
    {
        printf("Produto não encontrado.\n");
    }
}

int main()
{
    int opcao;
    do
    {
        printf("1. Cadastrar um novo item\n");
        printf("2. Listar por nome em ordem crescente\n");
        printf("3. Listar por valor em ordem crescente\n");
        printf("4. Listar por valor em ordem decrescente\n");
        printf("5. Excluir um item\n");
        printf("-1. Sair\n");
        printf("Digite uma opção: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            cadastrar();
            break;
        case 2:
            listar(compareNome);
            break;
        case 3:
            listar(compareValorCrescente);
            break;
        case 4:
            listar(compareValorDecrescente);
            break;
        case 5:
            excluir();
            break;
        }
    } while (opcao != -1);

    return 0;
}
