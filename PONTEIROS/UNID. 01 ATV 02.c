#include <stdio.h>

int main (){

    int operacao;
    double saldoConta = 0, valorDeposito = 0, valorSaque = 0,saldoCheque = 0, chequeEspecial = 100;

    printf("\n Digite 1 para DEPOSITAR\n");
    printf(" Digite 2 para EXTRATO\n");
    printf(" Digite 3 para SACAR\n");
    printf(" Digite 4 para VERIFICAR SALDO DO CHEQUE ESPECIAL \n");
    scanf("%d", &operacao);

    while (operacao != -1){
        
        if (operacao == 1){
            
            printf("Digite o valor do deposito: ");
            scanf("%lf", &valorDeposito);
            
            saldoConta = saldoConta + valorDeposito + chequeEspecial;
        }
        else if (operacao == 2){

            printf("O saldo eh: %.2lf \n", saldoConta);
        }
        else if (operacao == 3){

            printf("Digite o valor a ser sacado: ");
            scanf("%lf", &valorSaque);

            if (valorSaque <= saldoConta){
                saldoConta -= valorSaque;
            }
            else{
            
            printf("Saldo insuficiente");
            }
        }
        else if (operacao == 4){
            saldoCheque = saldoConta - chequeEspecial;
            printf("O saldo eh: %.2lf \n", saldoCheque);
        }
        else{
            printf("operacao invalida\n");
        }
        
        printf("\n Qual operacao deseja realizar: ");
        scanf("%d", &operacao);
    }
}