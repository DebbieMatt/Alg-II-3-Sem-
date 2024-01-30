/*
Executar pelo terminal: g++ -o EXEMPLO_01 EXEMPLO_01.c
Depois: ./EXEMPLO_01
*/


#include <stdlib.h>
#include <stdio.h>

// Algoritmo que altera o valor da variavel, com um ponteiro que indica qual valor que a fução irá passar a ser.

void recebePonteiro (int *ponteiro){
    
    *ponteiro = 25;
}

int main(){
    
    int a = 10; 
    int *aPtr = &a; // asteristico indica apontar/ponteiro, para o tipo: int, float, double, char, etc.
    
    printf("O valor de a: %d \n", a);
    
    recebePonteiro (&a); // correto
    recebePonteiro (aPtr); // correto
    
    // recebePonteiro (&aPtr); // errado
    
    printf("Valor de a: %d \n", a);

    return 0;
}
