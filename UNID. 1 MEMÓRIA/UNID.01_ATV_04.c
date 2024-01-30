#include <stdlib.h>
#include <stdio.h>

void inverter(int *a, int *b){
    
    int aux[2];
    
    for (int i = 0; i < 2; i++){
      aux[i] = *( a + i);
    }
    for (int i = 0; i < 2; i++){
      *(a + i) = *(b + i);
    }
    for (int i = 0; i < 2; i++){
      *(b + i) = aux[i];
    }
}

void main(){

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

    inverter(a,b);

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