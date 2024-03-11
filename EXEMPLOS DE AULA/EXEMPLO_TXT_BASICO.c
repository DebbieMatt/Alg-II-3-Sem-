#include <stdlib.h>
#include <stdio.h>
/*
    MODOS DE ABERTURA DE ARQUIVOS:
    W --> ESCRITA
    R --> LEITURA
    A --> ANEXAR
    R+ --> LEITURA E ESCRITA
    W+ --> LEITURA E ESCRITA (apaga o conteúdo, caso o arq. já exista)
    A+ --> LEITURA E ESCRITA (adiciona ao final do arquivo)
*/

int main()
{
    FILE *file = fopen("arquivo.txt", "w"); // abri ou cria um arq txt e escreve.
    char letra;

    if (file)
    {
        printf("\nDigite uma texto e pressione ENTER para finalizar.\n");
        scanf("%c", &letra);
        while (letra != '\n')
        {
            fputc(letra, file);
            scanf("%c", &letra);
        }
        fclose(file);
    }
    else
    {
        printf("\n\t--> ERRO ao abrir o arquivo.\n");
    }
}