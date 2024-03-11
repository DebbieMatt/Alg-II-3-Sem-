#include <stdio.h>
#include <stdlib.h>
#define TAM 10

typedef struct
{
    int ano;
    float preco;
    char marca[15], modelo[15], cor[10];
} Estaciona;

void Entrada(Estaciona *p)
{
    printf("Digite a marca do carro: \n");
    scanf("%s[\n]15", p->marca);

    printf("\nDigite o modelo do carro: \n");
    scanf("%s[\n]15", p->modelo);

    printf("Digite a cor do carro: \n");
    scanf("%s[\n]15", p->cor);

    printf("Digite o ano do carro: \n");
    scanf("%d", &p->ano);

    printf("Digite o valor do carro: \n");
    scanf("%f", &p->preco);
}

void imprimir(Estaciona p[], int *pos)
{

    printf("\nLista de carros:\n");

    for (int i = 0; i < *pos; i++)
    {
        printf("%d. Marca: %s| Modelo: %s | Cor: %s | Ano: %d | Valor do carro: %.2f\n", i, p[i].marca, p[i].modelo, p[i].cor, p[i].ano, p[i].preco);
    }
}

void excluir(Estaciona p[], int *pos, int *posExcluir)
{
    for (int i = *posExcluir; i < *pos - 1; i++)
    {
        p[i] = p[i + 1];
    }
    (*pos)--;
    printf("carro excluido com sucesso\n");
}

void salvarEmArquivo(Estaciona p[], int *pos)
{
    FILE *arq = fopen("arquivo.txt", "w"); // abri ou cria um arq txt e escreve.

    if (arq)
    {
        for (int i = 0; i < *pos; i++)
        {
            fprintf(arq, "| %s |", p[i].marca);
            fprintf(arq, "| %s |", p[i].modelo);
            fprintf(arq, "| %s |", p[i].cor);
            fprintf(arq, "| %d |\n", p[i].ano);
            fprintf(arq, "| %.2f |\n", p[i].preco);
        }
        fclose(arq); // fecha o arq.
    }
    else
    {
        printf("ERRO: não é possivel abrir o arquivo.");
    }
}

void lerArquivo(Estaciona p[], int *pos)
{
    FILE *arq = fopen("arquivo.txt", "r"); // abri ou cria um arq txt e escreve.

    if (arq)
    {
        for (int i = 0; i < *pos; i++)
        {
            fprintf(arq, "| %s |", p[i].marca);
            fprintf(arq, "| %s |", p[i].modelo);
            fprintf(arq, "| %s |", p[i].cor);
            fprintf(arq, "| %d |", p[i].ano);
            fprintf(arq, "| %.2f |\n", p[i].preco);
        }
        fclose(arq); // fecha o arq.
    }
    else
    {
        printf("ERRO: não é possivel abrir o arquivo.");
    }
}

int main()
{
    Estaciona p[TAM];
    int pos = 0, opc, aux;

    do
    {
        printf("\nDigite (-1) para sair\n");
        printf("1 - Cadastro de Veiculos\n");
        printf("2 - Listagem de veiculos\n");
        printf("3 - Atualizar/Excluir veiculos\n");
        printf("4 - Salvar em arquivo .txt\n");
        printf("5 - Ler o arquivo de carros\n");

        printf("Informe a opção desejada:\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:

            if (pos < 10)
            {
                Entrada(&p[pos]);
                pos++;
            }
            else
            {
                printf("O estacionamento esta cheio\n");
            }
            break;

        case 2:

            if (pos != 0)
            {

                imprimir(p, &pos);
            }
            else
            {
                printf("O estacionamento esta vazio\n");
            }
            break;

        case 3:

            if (pos != 0)
            {

                printf("Qual carro deseja excluir ? ");
                scanf("%d", &aux);

                if (aux < pos)
                {

                    excluir(p, &pos, &aux);
                }
                else
                {
                    printf("indice invalido\n");
                }
            }
            else
            {
                printf("O estacionamento esta vazio\n");
            }
            break;

        case 4:
            salvarEmArquivo(p, &pos);
            break;

        case 5:
            lerArquivo(p, &pos);
            break;
        }
    } while (opc != -1);
}