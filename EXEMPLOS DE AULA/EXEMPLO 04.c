#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a = 10;
    int *aPtr = &a;

    int *soma = aPtr + 1;

    printf("Endereço de A: %p \n", aPtr);
    printf("Soma: %p \n", soma);
}
