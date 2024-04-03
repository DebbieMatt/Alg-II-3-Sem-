#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MESSAGE_LENGTH 100

// Função para armazenar a mensagem codificada no arquivo
void escreverMensagem(FILE *arquivo, const char *mensagem, int pulo)
{
    for (int i = 0; i < strlen(mensagem); i += pulo)
    {
        fputc(mensagem[i], arquivo);
    }
}

// Função para ler e decodificar a mensagem do arquivo
void lerMensagem(FILE *arquivo, int pulo)
{
    char caractere;
    while ((caractere = fgetc(arquivo)) != EOF)
    {
        printf("%c", caractere);
        fseek(arquivo, pulo - 1, SEEK_CUR); // Pula n casas
    }
    printf("\n");
}

int main()
{
    int opcao, pulo;
    char mensagem[MAX_MESSAGE_LENGTH];
    FILE *arquivo;

    printf("Bem-vindo ao programa de troca de mensagens!\n");

    do
    {
        printf("Escolha uma opção:\n");
        printf("1. Escrever mensagem\n");
        printf("2. Ler mensagem\n");
        printf("0. Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite uma frase de até %d caracteres: ", MAX_MESSAGE_LENGTH);
            scanf(" %[^\n]", mensagem);
            printf("Digite um número inteiro entre 1 e 5: ");
            scanf("%d", &pulo);

            arquivo = fopen("mensagem_codificada.txt", "w");
            if (arquivo == NULL)
            {
                printf("Erro ao abrir o arquivo.\n");
                return 1;
            }

            escreverMensagem(arquivo, mensagem, pulo);
            fclose(arquivo);
            printf("Mensagem codificada e armazenada no arquivo.\n");
            break;

        case 2:
            printf("Digite um inteiro negativo entre 1 e 5: ");
            scanf("%d", &pulo);

            arquivo = fopen("mensagem_codificada.txt", "r");
            if (arquivo == NULL)
            {
                printf("Erro ao abrir o arquivo.\n");
                return 1;
            }

            printf("Mensagem decodificada:\n");
            lerMensagem(arquivo, pulo);
            fclose(arquivo);
            break;

        case 0:
            printf("Encerrando o programa. Até logo!\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
