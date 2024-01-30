#include <stdio.h>
#include <stdbool.h>

typedef enum
{
    TEMPERATURA,
    LUMINOSIDADE,
    MOVIMENTO
} TipoSensor;

typedef struct
{
    TipoSensor tipo;
    union
    {
        float temperatura;
        float luminosidade;
        bool movimento;
    } dados;
} Sensor;

void cadastrarSensor(Sensor *sensores, int *totalSensores)
{
    int tipo;

    Sensor novoSensor;
    novoSensor.tipo = tipo - 1;

    printf("Escolha o tipo de sensor:\n");
    printf("1 - Temperatura\n");
    printf("2 - Luminosidade\n");
    printf("3 - Movimento\n");
    scanf("%d", &tipo);

    if (tipo < 1 || tipo > 3)
    {
        printf("Opção inválida.\n");
        return;
    }

    switch (novoSensor.tipo)
    {
    case TEMPERATURA:
        printf("Digite a temperatura em graus Celsius: ");
        scanf("%f", &novoSensor.dados.temperatura);
        break;
    case LUMINOSIDADE:
        printf("Digite a luminosidade em porcentagem: ");
        scanf("%f", &novoSensor.dados.luminosidade);
        break;
    case MOVIMENTO:
        printf("Movimento detectado? (1 para Sim, 0 para Não): ");
        scanf("%d", &novoSensor.dados.movimento);
        break;
    default:
        break;
    }

    sensores[*totalSensores] = novoSensor;
    (*totalSensores)++;
    printf("Sensor cadastrado com sucesso.\n");
}

void exibirSensores(Sensor *sensores, int totalSensores)
{

    if (totalSensores == 0)
    {
        printf("Nenhum sensor cadastrado.\n");
        return;
    }

    for (int i = 0; i < totalSensores; i++)
    {
        switch (sensores[i].tipo)
        {
        case TEMPERATURA:
            printf("Temperatura: %.2f°C\n", sensores[i].dados.temperatura);
            break;
        case LUMINOSIDADE:
            printf("Luminosidade: %.2f%%\n", sensores[i].dados.luminosidade);
            break;
        case MOVIMENTO:
            printf("Movimento detectado: %s\n", sensores[i].dados.movimento ? "Sim" : "Não");
            break;
        default:
            break;
        }
    }
}

int main()
{

    int totalSensores = 0, opcao;
    Sensor sensores[100];

    do
    {
        printf("\n1 - Cadastrar sensor\n");
        printf("2 - Exibir sensores\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarSensor(sensores, &totalSensores);
            break;
        case 2:
            exibirSensores(sensores, totalSensores);
            break;
        }
    } while (opcao != -1);
}
