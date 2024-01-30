#include <stdio.h>
#include <stdlib.h>
#define TAM 3

typedef struct
{
  char nome[30], cargo[10];
  float salario;
} funcionario;

void preencher(funcionario *f)
{
  getchar();
  printf("\nDigite o nome: \n");
  fgets(f->nome, sizeof(f->nome), stdin);

  printf("Digite o cargo: \n");
  fgets(f->cargo, sizeof(f->cargo), stdin);

  printf("Digite o salario: \n");
  scanf("%f", &f->salario);
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
    printf("\nNao inserido. Esta cheio!");
  }
}

void atualizar(funcionario f[], int pos, int posEdit)
{

  if (posEdit < pos)
  {
    preencher(&f[posEdit]);
  }
  else
  {
    printf("Invalido.\n");
  }
}

void excluir(funcionario f[], int *pos, int posExcluir)
{

  if (posExcluir < *pos)
  {

    for (int i = posExcluir; i < *pos - 1; i++)
    {

      f[i] = f[i + 1];
    }
    (*pos)--;
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
    printf("\nNome: %s", f[i].nome);
    printf("Cargo: %s", f[i].cargo);
    printf("Salario: %.2f", f[i].salario);
  }
}

int main(void)
{
  funcionario f[TAM];
  int pos = 0, opc = 5, aux;

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
      cadastrar(f, &pos);
      break;

    case 2:
      printf("Digite qual vc quer editar:\n");
      scanf("%d", &aux);
      atualizar(f, pos, aux);
      break;

    case 3:
      imprimir(f, pos);
      break;

    case 4:
      printf("Digite qual vc quer excluir:\n");
      scanf("%d", &aux);
      excluir(f, pos, aux);
      break;
    }
  } while (opc != 5);
}