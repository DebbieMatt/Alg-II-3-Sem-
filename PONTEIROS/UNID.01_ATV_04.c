#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int a[2], b[2];
    
    // declara um ponteiro para uma variável do tipo int
    int *p, *q;
  
    // preenchendo
    
    for(int i = 0; i < 2; i++){
        printf("Digite um numero: \n");
        scanf("%d", &a[i]);
    }
    for(int j = 0; j < 2; j++){
        printf("Digite um numero: \n");
        scanf("%d", &b[j]);
    }
    
    // aponta para a variável "a" e altera seu valor
    
        p = &a[0];
        *p = b[0];
        
        p = &a[1];
        *p = b[1];
        
    // imprimindo 
    
    printf("Vetor A: \n");
    for(int i = 0; i < 2; i++){
        printf("[%d] ", a[i]);
    }
    
    // aponta para a variável "b" e altera seu valor
    
        q = &b[1]; // PARA CORRIGIR 
        *q = a[1]; // " "
        
        q = &a[0]; // PARA CORRIGIR
        *q = b[0]; // " "
    
    // imprimindo
    
    printf("\nVetor B: \n");
    for(int j = 0; j < 2; j++){
        printf("[%d] ", b[j]);
    }
}