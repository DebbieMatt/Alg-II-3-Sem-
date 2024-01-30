#include <stdio.h>
int main()
{
    int vet[] = {1,2,3,4};
    printf("vet[0] => %d\n", *vet); // imprime a primeira posição
    printf("vet[1] => %d\n", *(vet+1)); // imprime a segunda posição
    printf("vet[2] => %d\n", *(vet+2));
    printf("vet[3] => %d\n", *(vet+3));
    return 0;
}
