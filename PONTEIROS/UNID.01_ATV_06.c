#include <stdio.h>
#include <stdlib.h>

void inverter(int *matriz[][5], int *vetor){
    
    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
        
        *(*(matriz+i)+j) = *(vetor + i);
        }
    }
}

int main()
{
    int matriz[5][5], vetor[5];
    
    for(int i = 0; i < 5; i++){
        printf("Vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }
    
    inverter (matriz, vetor);
    
     printf("\nMinha matriz:\n");
    
    /*impressão da matriz*/
    
    for(int i = 0; i < 5; i++){
        
        printf("\n");
         
        for(int j = 0; j < 5; j++){
            
            printf("\t %d", *(*(matriz+i)+j));
        }
    }
}
