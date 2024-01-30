/*
Executar pelo terminal: g++ -o UNID.01_ATV_00 UNID.01_ATV_00.c
Depois: ./UNID.00_ATV_00
*/

#include <stdlib.h>
#include <stdio.h>

void genero (int *sexo, int *idade){

    
    if(*sexo ==  1 ){
       printf("Sexo feminino \n");
        if (*idade < 60){
            printf("Se aposentará em: %d anos", 60 - *idade);
        }
        else{
            printf("Já pode se aposentar");
        }
    }
    else {
       if(*sexo == 2){
        printf("Sexo masculino \n");
        
        if (*idade < 65) {
        printf("Se aposentará em: %d anos", 65 - *idade);
        }
        else{
        printf("Já pode se aposentar");
        }
        }
    }
}

int main(){

    int sex, id;
    
    printf("Quantos anos vc tem ? ");
    scanf("%d", &id);
    printf("Digite 1 para Feminino ou 2 para Masculino \n"); 
    printf("Qual o seu sexo ? ");
    scanf("%d", &sex);
    
    genero (&sex, &id);
}