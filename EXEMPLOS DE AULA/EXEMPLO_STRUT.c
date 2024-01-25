#include <stdio.h>
#include <stdlib.h>
#define TAM 1O

typedef struct
{
  char nome[30], cargo[10];
  float funcionário;
} funcionario;

void preencher(funcionario *f)
{
  getchar();

  fgets(f->nome, sizeof(f->nome), stdin);
}

void cadastrar(funcionario f[], int *pos)
{
  if (*pos < TAM)
  {
    preencher(&f[*pos]);
    (*pos)++;
  }
  else
  {
    printf("Nao inserido. Esta cheio!");
  }
}

void atualizar(funcionario f[], int pos, int posEdit)
{

  if (posEdit < pos)
  {
    preencher(&f[posEdit]);
  }
}

void excluir(funcionario f[], int pos, int posExcluir)
{

  if (posExcluir < pos)
  {

    for (int i = posExcluir; i < *posExcluir - 1; i++)
    {

      f[i] = f[i + 1];
    }
    (*pos)++;
  }
  else
  {
    printf("Inválido \n");
  }
}

void imprimir(funcionario f[], int pos)
{

  for (int i = 0; i < pos; i++)
  {
    printf("Nome: %s", f[i].nome);
    printf("Cargo: %s", f[i].cargo);
    printf("Salario: %f", f[i].salario);
  }
}