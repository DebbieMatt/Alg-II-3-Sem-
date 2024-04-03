#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct
{
    int top;
    int items[MAX_SIZE];
} Stack;

void push(Stack *s, int item)
{
    if (s->top == MAX_SIZE - 1)
    {
        printf("Pilha cheia!\n");
        return;
    }
    s->items[++(s->top)] = item;
}

int pop(Stack *s)
{
    if (s->top == -1)
    {
        printf("Pilha vazia!\n");
        return -1;
    }
    return s->items[(s->top)--];
}

int somaRecursiva(Stack *s)
{
    if (s->top == -1)
    {
        return 0;
    }
    else
    {
        int item = pop(s);
        return item + somaRecursiva(s);
    }
}

int main()
{
    Stack s;
    s.top = -1;

    // Empilhando itens
    for (int i = 1; i <= 10; i++)
    {
        push(&s, i);
    }

    // Calculando a soma recursivamente
    int soma = somaRecursiva(&s);
    printf("A soma dos itens da pilha é: %d\n", soma);

    return 0;
}
