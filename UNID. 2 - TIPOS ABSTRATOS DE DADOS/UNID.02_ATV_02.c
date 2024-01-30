#include <stdio.h>
#include <stdlib.h>
#define TAM 10

typedef struct
{
    char placa_veículo[15], marca[15], modelo[15], cor[10];
    int horas_estacionado;

} Estaciona;

void Entrada(Estaciona *p)
{

    printf("\nDigite a placa do veículo: \n");
    scanf("%s[\n]15", p->placa_veículo);

    printf("Digite a marca do carro: \n");
    scanf("%s[\n]15", p->marca);

    printf("\nDigite o modelo do carro: \n");
    scanf("%s[\n]15", p->modelo);

    printf("Digite a cor do carro: \n");
    scanf("%s[\n]15", p->cor);

    printf("Digite a quantidade de horas: \n");
    scanf("%d", &p->horas_estacionado);
}

void calculo_custo(Estaciona *p)
{
    printf("Custo de %d horas: R$%.2f\n", p->horas_estacionado, p->horas_estacionado * 10.0);
}

void saida(Estaciona p[], int *pos, int *posExcluir)
{
    for (int i = *posExcluir; i < *pos - 1; i++)
    {
        p[i] = p[i + 1];
    }
    (*pos)--;
    printf("carro excluido com sucesso\n");
}

void imprimir(Estaciona p[], int *pos)
{

    printf("\nLista de carros:\n");

    for (int i = 0; i < *pos; i++)
    {
        printf("%d. Placa:%s | Marca: %s| Modelo: %s | Cor: %s | Numero de horas estacionado: %d\n", i, p[i].placa_veículo, p[i].marca, p[i].modelo, p[i].cor, p[i].horas_estacionado);
    }
}

int main(void)
{
    Estaciona p[TAM];
    int pos = 0, opc, aux;

    do
    {
        printf("\nDigite (-1) para sair\n");
        printf("1 - Entrada de veiculos\n");
        printf("2 - Custo do estacionamento pelas horas estacionadas (tarifa R$10,00 p/ hr)\n");
        printf("3 - Registrar a saida dos veiculos\n");
        printf("4 - Listagem de veiculos\n");

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
            { // se o inventario tem algum item

                printf("Qual posicao gostaria de calcular o custo do estacionamento? ");
                scanf("%d", &aux);

                if (aux < pos)
                { // quer dizer q existe esse produto catalogado

                    calculo_custo(&p[aux]);
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

        case 3:

            if (pos != 0)
            {

                printf("Qual carro ira sair? ");
                scanf("%d", &aux);

                if (aux < pos)
                {

                    saida(p, &pos, &aux);
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

            if (pos != 0)
            {

                imprimir(p, &pos);
            }
            else
            {
                printf("O estacionamento esta vazio\n");
            }
            break;
        }
    } while (opc != -1);
}