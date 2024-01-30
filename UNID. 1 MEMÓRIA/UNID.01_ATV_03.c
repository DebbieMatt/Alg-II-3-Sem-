#include <stdlib.h>
#include <stdio.h>

int main(){
    
    int dep = 0, juros = 1;
    double money_func = 0.0, money_atual = 0.0, p = 0.0;

    do{
        
        printf("\n(Digite -1, para parar).\n");
        printf("\nQual departamento pertence ? ");
        scanf("%d", &dep);
          
        printf("\nQual salario atual? ");
        scanf("%lf", &money_func);
        
      
        if(dep == 1 || dep == 2){
        
            p = money_func;
            money_atual = money_func * 0.22;
            p = money_func + money_atual;
        
        printf("\nDepartamento %d, recebera R$ %.2lf \n", dep,p);
        }
        else if(dep == 3){
        
            p = money_func;
            money_atual = money_func * 0.17;
            p = money_func + money_atual;
        
        printf("\n Departamento %d, recebera R$ %.2lf \n", dep, p);
        }
        else if(dep == 4 || dep == 5){
        
            p = money_func;
            money_atual = money_func * 0.10;
            p = money_func + money_atual;
        
        printf("\nDepartamento %d, recebera R$ %.2lf \n", dep, p);
        }
      
        else{
            printf("Codigo invalido.\n");
        }
    }while (dep != -1);
    
}