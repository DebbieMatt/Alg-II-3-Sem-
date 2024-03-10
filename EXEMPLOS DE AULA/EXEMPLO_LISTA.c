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

int main()
{
    int op;

    do
    {
        printf("\nDigite: 1 - CADASTRAR;\t2 - IMPRIMIR; \nDigite (-1) para parar o loop\n");
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

        default:

            printf("opção invalida");
            break;
        }
    } while (op != 0);

    return 0;
}
