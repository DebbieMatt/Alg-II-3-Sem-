#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PACIENTES 10

typedef struct
{
    int registro;
    char nome[50];
    int idade;
    char consulta[100];
} Paciente;

typedef struct
{
    Paciente pacientes[MAX_PACIENTES];
    int inicio, fim;
} Fila;

Fila criarFila()
{
    Fila f;
    f.inicio = 0;
    f.fim = 0;
    return f;
}

int filaVazia(Fila f)
{
    return f.inicio == f.fim;
}

int filaCheia(Fila f)
{
    return f.fim == MAX_PACIENTES;
}

void inserirPaciente(Fila *f, Paciente p)
{
    if (!filaCheia(*f))
    {
        f->pacientes[f->fim] = p;
        f->fim++;
    }
    else
    {
        printf("Fila cheia!\n");
    }
}

Paciente chamarPaciente(Fila *f)
{
    if (!filaVazia(*f))
    {
        Paciente p = f->pacientes[f->inicio];
        f->inicio++;
        return p;
    }
    else
    {
        printf("Fila vazia!\n");
    }
}

Paciente proximoPaciente(Fila f)
{
    if (!filaVazia(f))
    {
        return f.pacientes[f.inicio];
    }
    else
    {
        printf("Fila vazia!\n");
    }
}

int main()
{
    Fila f = criarFila();
    Paciente p;
    int opcao;

    do
    {
        printf("1. Inserir paciente\n");
        printf("2. Chamar próximo paciente\n");
        printf("3. Ver próximo paciente\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o registro, nome, idade e motivo da consulta do paciente: ");
            scanf("%d %s %d %s", &p.registro, p.nome, &p.idade, p.consulta);
            inserirPaciente(&f, p);
            break;
        case 2:
            p = chamarPaciente(&f);
            printf("Paciente %s chamado para a consulta.\n", p.nome);
            break;
        case 3:
            p = proximoPaciente(f);
            printf("Próximo paciente: %s\n", p.nome);
            break;
        case 4:
            printf("Encerrando o programa...\n");
            break;
        default:
            printf("Opção inválida!\n");
        }
    } while (opcao != 4);

    return 0;
}
