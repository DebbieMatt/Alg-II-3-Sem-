// Esse código cria uma pilha simples, empilha 10 itens e depois desempilha todos eles, somando as chaves dos registros e imprimindo o valor retornado.

#include <stdio.h>
#include <stdlib.h>

// Estrutura para um nó da pilha
struct Node {
    int data;
    struct Node* next;
};

// Função para criar um novo nó na pilha
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Função para adicionar um item à pilha
void push(struct Node** root, int data) {
    struct Node* node = newNode(data);
    node->next = *root;
    *root = node;
}

// Função para verificar se a pilha está vazia
int isEmpty(struct Node* root) {
    return !root;
}

// Função para remover um item da pilha
int pop(struct Node** root) {
    if (isEmpty(*root))
        return 0;
    struct Node* temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

// Função recursiva para desempilhar e somar os itens da pilha
int desempilharESomar(struct Node** root) {
    if (isEmpty(*root))
        return 0;
    int temp = pop(root);
    return temp + desempilharESomar(root);
}

int main() {
    struct Node* root = NULL;

    // Adiciona 10 itens à pilha
    for (int i = 1; i <= 10; i++) {
        push(&root, i);
    }

    // Calcula e imprime a soma
    int soma = desempilharESomar(&root);
    printf("A soma dos itens desempilhados é: %d\n", soma);

    return 0;
}
