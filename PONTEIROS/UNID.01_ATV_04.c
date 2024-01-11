#include <stdlib.h>
#include <stdio.h>

void imprimir(int a[], int b[]){
    
    // imprimindo 
    
    printf("Vetor A: \n");
    
    for(int i = 0; i < 2; i++){
        printf("[%d] ", *(a + i));
    }
    printf("\nVetor B: \n");
    
    for(int j = 0; j < 2; j++){
        printf("[%d] ", *(b + j));
    }
}

int main(){

    int a[2], b[2];
    
    // preenchendo
    
    for(int i = 0; i < 2; i++){
        printf("Digite um numero: \n");
        scanf("%d", &a[i]);
    }
    for(int j = 0; j < 2; j++){
        printf("Digite um numero: \n");
        scanf("%d", &b[j]);
    }

    imprimir(a, b);
}