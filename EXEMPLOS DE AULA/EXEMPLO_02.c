#include <stdlib.h>
#include <stdio.h>

// Algoritmo que inverte o valor das variaveis A e B, com um ponteiro e uma variavel auxiliar.

void trocar (int *x, int *y){
    
    int aux = *x;
    
    *x = *y;
    *y = aux;
}

int main(){
    
    int a = 10, b = 20; 
    
    printf("A: %d - B: %d \n", a, b);
    
    trocar (&a, &b); 
    
    printf("A: %d - B: %d \n", a, b);

    return 0;
}
