#include <stdio.h>

int receberVetor(int vetA[], int vetB[], int vetC[]){ // recebendo vetor

int maior = 0;

    printf("Primeiro elemento de A: %d\n", *vetA);
    printf("Segundo elemento de A: %d\n", *(vetA+1));
    printf("\n");
    printf("Primeiro elemento de B: %d\n", *vetB);
    printf("Segundo elemento de B: %d\n", *(vetB+1));
    
    
    
    for(int i = 0; i < 2; i++){
               
        if(maior < *vetA){
            
            vetC[i] = maior;
        }
    }

    printf("Primeiro elemento de C: %d\n", *vetC);
    printf("Segundo elemento de C: %d\n", *(vetC+1));
}


int main(){
    
    int vetA[2], vetB[2], vetC[2];
    
    for(int i = 0; i < 2; i++){
        
            printf(" vetA[%d]:", i);
            scanf("%d ", &vetA[i]);
    }
    
    for(int i = 0; i < 2; i++){
        
            printf(" vetB[%d]:", i);
            scanf("%d ", &vetB[i]);
    }
    
    printf("\n");
    
    receberVetor(vetA, vetB, vetC);
}