#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int a = 21;
    double b = 3.14;
    
    int *aPtr = &a;
    double *Ponter = &b;
    
    printf("Valor de a: %p \n", &a); // para imprimir o endereço de memória que o ponteiro aponta, passamos 'p' como parametro.
    printf("Valor de b: %p", &b);
    
}
