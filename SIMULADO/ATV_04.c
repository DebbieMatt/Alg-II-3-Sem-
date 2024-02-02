// Agora que você ajudou Bartolomeu, ele quer ir além e criou um ponteiro genérico que aponta para esse vetor. Mostre como ele pode usar o ponteiro genérico para imprimir o elemento que esta na segunda posição do vetor.

#include <stdio.h>
int main(void)
{
    int vetor[3] = {7, 900, 125};
    void *generico = vetor;
    printf("0 elemento da segunda posição é: %d\n", *((int *)(vetor + 1)));
}

// Qual fragmento de código deve ser inserido no espaço para que o elemento da segunda posição do vetor seja impressa corretamente a partir do ponteiro genérico?