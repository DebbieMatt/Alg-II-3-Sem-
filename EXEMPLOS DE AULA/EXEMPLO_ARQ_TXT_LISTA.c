#include <stdlib.h>
#include <stdio.h>
#define TAM 10
typedef struct
{
    char nome[50];
    int idade;
    char sexo;
} Pessoa;

Pessoa lista[TAM];
int qtd = 0;

int cadastraPessoa()
{
    if (qtd < TAM)
    {
        Pessoa p;
        scanf("%*c");
        printf("\nInsira seu Nome:");
        fgets(p.nome, 50, stdin);

        printf("Insira sua idade e sexo:");
        scanf("%d %s", &p.idade, &p.sexo);
        lista[qtd] = p;
        qtd++;
        return 0;
    }
    else
    {
        printf("Erro: vetor cheio.");
        return 1;
    }
}

void imprimirVetor()
{
    for (int i = 0; i < qtd; i++)
    {
        printf("\n%d. Nome: %s Idade: %d, Sexo: %c\n", i, lista[i].nome, lista[i].idade, lista[i].sexo);
    }
}

void salvarEmArquivo()
{
    FILE *arq = fopen("arquivo.txt", "w"); // abri ou cria um arq txt e escreve.

    if (arq)
    {
        for (int i = 0; i < qtd; i++)
        {
            fprintf(arq, "%s", lista[i].nome);
            fprintf(arq, "%d\n", lista[i].idade);
            fprintf(arq, "%c\n", lista[i].sexo);
        }
        fclose(arq); // fecha o arq.
    }
    else
    {
        printf("ERRO: não é possivel abrir o arquivo.");
    }
}

void lerArquivo()
{
    FILE *arq = fopen("arquivo.txt", "r"); // abri ou cria um arq txt e escreve.

    if (arq)
    {
        for (int i = 0; i < qtd; i++)
        {
            fprintf(arq, "%s", lista[i].nome);
            fprintf(arq, "%d\n", lista[i].idade);
            fprintf(arq, "%c\n", lista[i].sexo);
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
    int op;

    do
    {
        printf("\nDigite: 1 - CADASTRAR; 2 - IMPRIMIR; 3 -SALVAR ARQ.; 4 - LER ARQ.;\n0 - sair do loop\n");
        scanf("%d", &op);

        switch (op)
        {

        case 0:
            printf("Tchau");
            break;

        case 1:
            cadastraPessoa();
            break;

        case 2:
            imprimirVetor();
            break;

        case 3:
            salvarEmArquivo();
            break;

        case 4:
            lerArquivo();
            break;

        default:

            printf("opção invalida");
            break;
        }
    } while (op != 0);

    return 0;
}
