// PROGRAMA COM INTERAÇÃO DO USUARIO

#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
    char placa[7];
    int apto;
} Carro;

typedef struct {
    Carro carros[MAX];
    int topo;
} Pilha;

void cria(Pilha *p) {
    p->topo = -1;
}

void push(Pilha *p, Carro c) {
    if (p->topo == MAX - 1) {
        printf("Garagem cheia!\n");
        return;
    }
    p->carros[++p->topo] = c;
}

Carro pop(Pilha *p) {
    if(p->topo == -1) {
        printf("Garagem vazia!\n");
        Carro c = {"", -1};
        return c;
    }
    return p->carros[p->topo--];
}

void retirarCarro(Pilha *p, char placa[]) {
    Pilha aux;
    cria(&aux);
    Carro c;
    int encontrado = 0;

    while(p->topo != -1) {
        c = pop(p);
        if(strcmp(c.placa, placa) == 0) {
            encontrado = 1;
            break;
        }
        push(&aux, c);
    }

    if(encontrado) {
        printf("Carros a serem retirados:\n");
        while(aux.topo != -1) {
            c = pop(&aux);
            printf("Placa: %s, Apartamento: %d\n", c.placa, c.apto);
        }
    } else {
        printf("Carro não encontrado.\n");
    }
}

void imprimirPilha(Pilha *p) {
    if(p->topo == -1) {
        printf("Garagem vazia!\n");
        return;
    }
    printf("Carros na garagem:\n");
    for(int i = p->topo; i >= 0; i--) {
        printf("Placa: %s, Apartamento: %d\n", p->carros[i].placa, p->carros[i].apto);
    }
}

int main() {
    Pilha p;
    cria(&p);
    Carro c;
    char opcao, placa[7];
    int apto;

    while(1) {
        printf("Escolha uma opção:\n");
        printf("1. Adicionar carro\n");
        printf("2. Retirar carro\n");
        printf("3. Imprimir garagem\n");
        printf("4. Sair\n");
        scanf(" %c", &opcao);

        switch(opcao) {
            case '1':
                printf("Digite a placa do carro: ");
                scanf("%s", c.placa);
                printf("Digite o número do apartamento: ");
                scanf("%d", &c.apto);
                push(&p, c);
                break;
            case '2':
                printf("Digite a placa do carro a ser retirado: ");
                scanf("%s", placa);
                retirarCarro(&p, placa);
                break;
            case '3':
                imprimirPilha(&p);
                break;
            case '4':
                return 0;
            default:
                printf("Opção inválida.\n");
        }
    }
}
