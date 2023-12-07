#include <stdio.h>
int main()
{
    int vet[] = {1,2,3,4, 5};
    printf("vet[0] => %p\n", &vet[0]);
    printf("vet[1] => %p\n", &vet[1]);
    printf("vet[2] => %p\n", &vet[2]);
    printf("vet[3] => %p\n", &vet[3]);
    printf("vet[4] => %p\n", &vet[4]);
    printf("vet => %p\n", vet);
    return 0;
}

