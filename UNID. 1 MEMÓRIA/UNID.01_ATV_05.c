
#include <stdlib.h>
#include <stdio.h>

void inverter(int *a, int *b, int *c){

    for (int i = 0; i < 2; i++){

        if (*(a + i) > *(b + i)){
            *(c + i) = *(a + i);

        }
        else if (*(b + i) == *(a + i)){
            *(c + i) = *(a + i);

        }
        else{
            *(c + i) = *(b + i);
        }
    }
}

int main(){

    int a[2], b[2], c[2];

    // preenchendo

    for(int i = 0; i < 2; i++){
        printf("Digite um numero: \n");
        scanf("%d", &a[i]);
    }
    for(int j = 0; j < 2; j++){
        printf("Digite um numero: \n");
        scanf("%d", &b[j]);
    }

    inverter(a,b,c);

    // imprimindo 

    printf("\nVetor A: \n");

    for(int i = 0; i < 2; i++){
        printf("[%d] ", *(a + i));
    }
    printf("\nVetor B: \n");

    for(int j = 0; j < 2; j++){
        printf("[%d] ", *(b + j));
    }
    printf("\nVetor C: \n");

    for(int k = 0; k < 2; k++){
        printf("[%d] ", *(c + k));
    }
}