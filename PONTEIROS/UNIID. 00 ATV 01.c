#include <stdlib.h>
#include <stdio.h>

char genero (char* sexo, int year){
    
    if(*sexo == 'F' ){
       
       if (year < 60){
        printf("Se aposentará em: %d anos", 60 - year);
       }
       else{
        printf("Já pode se aposentar");
       }
    }
    else {
       
       if (year < 65) {
        printf("Se aposentará em: %d anos", 65 - year);
       }
       else{
        printf("Já pode se aposentar");
       }
    }
}

int main(int argc, char** argv){
    
    int year;
    char sexo[15];
    
    printf("Quantos anos vc tem ? ");
    scanf("%d", &year);
    
    printf("Qual o seu sexo ? ");
    scanf("%s", &sexo);
    
    genero (sexo, year);
}
