#include <stdio.h>
#include <stdlib.h>
#define TAM 5

typedef struct
{
    char nome[15];
    float preco;
    int qtd;
} Produto;

void preencher(Produto *p)
{

    printf("\nDigite o nome: \n");
    scanf("%s[\n]15", p->nome);

    printf("Digite o preco: \n");
    scanf("%f", &p->preco);

    printf("Digite a Quantidade: \n");
    scanf("%d", &p->qtd);
}

void cadastrar(Produto p[], int *pos)
{

    if (*pos < TAM)
    {
        preencher(&p[*pos]);
        (*pos)++;
    }
    else
    {
        printf("\nNao inserido. Esta cheio!");
    }
}

void atualizar(Produto p[], int pos, int posEdit)
{

    if (posEdit < pos)
    {
        preencher(&p[posEdit]);
    }
    else
    {
        printf("Invalido.\n");
    }
}

void excluir(Produto p[], int *pos, int posExcluir)
{

    if (posExcluir < *pos)
    {

        for (int i = posExcluir; i < *pos - 1; i++)
        {

            p[i] = p[i + 1];
        }
        (*pos)--;
    }
    else
    {
        printf("Inválido \n");
    }
}

void imprimir(Produto p[], int pos)
{

    for (int i = 0; i < pos; i++)
    {
        printf("Nome: %s \n Preço: %.2f \n Quantidade do estoque: %d", p[i].nome, p[i].preco, p[i].qtd);
    }
}

int main(void)
{
    Produto p[TAM];
    int pos = 0, opc, aux;

    do
    {
        printf("\n1 - Cadastrar\n");
        printf("2 - Atualizar\n");
        printf("3 - Listar\n");
        printf("4 - Excluir\n");

        printf("Informe a opção desejada:\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            cadastrar(p, &pos);
            break;

        case 2:
            printf("Digite qual vc quer editar:\n");
            scanf("%d", &aux);
            atualizar(p, pos, aux);
            break;

        case 3:
            imprimir(p, pos);
            break;

        case 4:
            printf("Digite qual vc quer excluir:\n");
            scanf("%d", &aux);
            excluir(p, &pos, aux);
            break;
        }
    } while (opc != -1);
}