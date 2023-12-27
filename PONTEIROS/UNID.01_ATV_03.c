#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
    
    int dep = 0, juros = 1;
    double money_func = 0.0, money_atual = 0.0;
    double *p;
    
    printf("Qual departamento vc pertence ? \n");
    scanf("%d", &dep);
    
    printf("Quanto vc recebe ? \n");
    scanf("%lf", &money_func);

    switch (dep){

    case 1 ... 2:
        
        p = &money_func;
        money_atual = money_func * 0.22;
        *p = money_func + money_atual;
        
        printf("\n Por ser do departamento 1 ou 2, seu salario passará a ser R$ %.2lf. \n", money_func);
    break;

    case 3:
        p = &money_func;
        money_atual = money_func * 0.17;
        *p = money_func + money_atual;
        
        printf("\n Por ser do departamento %d, seu salario passará a ser R$ %.2lf. \n", dep, money_func);
    break;

    case 4 ... 5:
        p = &money_func;
        money_atual = money_func * 0.10;
        *p = money_func + money_atual;
        
        printf("\n Por ser do departamento 4 ou 5, seu salario passará a ser R$ %.2lf. \n", money_func);
    break;

    default:
        printf("codigo invalido");
    break;
    }
}
