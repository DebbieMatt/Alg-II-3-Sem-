#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5

typedef struct
{
    char nome[12];
    int codigo;
} departamento;

typedef struct
{
    char nome[12];
    int codigo;
    departamento *dep;
} funcionario;

void preencher_departamento(departamento *d)
{
    printf("Digite o nome do novo departamento: ");
    scanf("%s[\n]12", d->nome);

    printf("Digite o codigo do novo departamento: ");
    scanf("%d", &d->codigo);
}

void cadastro(funcionario *Est, departamento d[], int *pos_dep)
{
    printf("Digite o nome do funcionario: ");
    scanf("%s[\n]12", Est->nome);

    printf("Digite o codigo do funcionario: ");
    scanf("%d", &Est->codigo);

    printf("Departamento do funcionario ja foi cadastrado? \n1-Nao\n2-Sim: ");
    int aux;
    scanf("%d", &aux);

    switch (aux)
    {
    case 1: // criar departamento
        if (*pos_dep < 5)
        {
            preencher_departamento(&d[*pos_dep]);
            Est->dep = &d[*pos_dep];
            (*pos_dep)++;
        }
        else
        {
            printf("departamentos maximo");
        }
        break;
    case 2:
        printf("Qual a posicao do vetor do departamento ja criado? ");
        int i;
        scanf("%d", &i);
        Est->dep = &d[i];
        break;
    default:
        break;
    }
}

void listar(funcionario f[], int *pos)
{
    for (int i = 0; i < *pos; i++)
    {
        printf("\nNome: %s, codigo: %d, departamento: %s, dep cod: %d", f[i].nome, f[i].codigo, f[i].dep->nome, f[i].dep->codigo);
    }
}

void listar_D(departamento d[], int *pos)
{
    for (int i = 0; i < *pos; i++)
    {
        printf("\n departamento: %s, dep cod: %d", d[i].nome, d[i].codigo);
    }
}

void atualizar(funcionario f[], int *pos, departamento d[], int *pos_dep)
{
    int opc;

    printf("1 - funcionario nome\n");
    printf("2 - funcionario codigo \n");
    printf("3 - departamento nome\n");
    printf("4 - departamento codigo\n");
    printf("5 - departamento de um funcionario\n");
    printf("O que deseja atualizar: ");
    scanf("%d", &opc);

    switch (opc)
    {
        int pos_aux, pos_aux2;
    case 1:
        listar(f, pos);
        printf("\ndigite a POSICAO do vetor do funcionario que deseja atualizar: ");
        scanf("%d", &pos_aux);

        printf("\nDigite o nome: ");
        scanf("%s[\n]", f[pos_aux].nome);
        break;
    case 2:
        listar(f, pos);

        printf("\ndigite a POSICAO do vetor do funcionario que deseja atualizar: ");
        scanf("%d", &pos_aux);
        printf("Digite o codigo: ");
        fflush(stdin);
        scanf("%d", &f[pos_aux].codigo);
        break;
    case 3:
        listar_D(d, pos_dep);
        printf("\ndigite POSICAO do vetor do departamento que deseja atualizar: ");
        scanf("%d", &pos_aux);

        printf("Digite o nome: ");
        scanf("%s[\n]", d[pos_aux].nome);

        break;
    case 4:
        listar_D(d, pos_dep);
        printf("\ndigite POSICAO do vetor do departamento que deseja atualizar: ");
        scanf("%d", &pos_aux);
        printf("Digite o codigo: ");
        fflush(stdin);
        scanf("%d", &d[pos_aux].codigo);

        break;
    case 5:
        listar(f, pos);
        printf("\ndigite POSICAO do vetor do funcionario que deseja atualizar: "); // POSICAO DO VETOR F
        scanf("%d", &pos_aux);

        listar_D(d, pos_dep);
        printf("Digite a POSICAO do vetor do departamento que desejar realocar o funcionario: "); // POSICAO VETOR D
        scanf("%d", &pos_aux2);
        f[pos_aux].dep = &d[pos_aux2];
        break;
    default:
        break;
    }
}

int main(void)
{
    int pos_fun = 0, pos_dep = 0;
    int opcao;
    departamento d[TAM];
    funcionario f[TAM];
    do
    {

        printf("\nDigite (-1) para sair\n");
        printf(" 1 - cadastros\n");
        printf(" 2 - Atualizar\n");
        printf(" 3 - listar \n");
        printf(" Digite uma opcao: ");
        scanf("%d", &opcao);

        // int pos_aux;
        switch (opcao)
        {
        case 1:
            if (pos_fun < TAM)
            {
                cadastro(&f[pos_fun], d, &pos_dep);
                pos_fun++;
            }
            else
            {
                printf("esta cheio\n");
            }
            break;
        case 2:
            atualizar(f, &pos_fun, d, &pos_dep);
            break;
        case 3:
            if (pos_fun != 0)
            {
                listar(f, &pos_fun);
            }
            else
            {
                printf("esta vazio\n");
            }
            break;
        case -1:
            break;

        default:
            printf("Opcao invalida\n");
            break;
        }
    } while (opcao != -1);

    return 0;
}