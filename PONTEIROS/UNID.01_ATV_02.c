#include <stdio.h>
#include <stdlib.h>

void main (){

  int operacao;
  double saldoConta = 0, limiteConta = 0, valorDeposito = 0, valorSaque = 0, saldoCheque = 0, chequeEspecial = 100;

  printf ("\nDigite 1 para DEPOSITAR\n");
  printf ("Digite 2 para VER EXTRATO\n");
  printf ("Digite 3 para SACAR\n");
  printf ("Digite 4 para VER LIMITE DO CHEQUE ESPECIAL\n");
  printf ("Digite -1 para ENCERRAR\n");
  
  printf ("\nQual operacao deseja realizar: ");
  scanf ("%d", &operacao);

  while (operacao != -1)
  {
    if (operacao == 1)
    {
       printf ("Digite o valor do deposito: ");
       scanf (" %lf", &valorDeposito);
  
       saldoConta = saldoConta + valorDeposito + chequeEspecial;
       limiteConta += valorDeposito;
    }
    else if (operacao == 2)
    {
        printf ("O saldo da conta e de: %.2lf \n", limiteConta);
        saldoCheque = limiteConta + chequeEspecial;
	  
       if (saldoCheque >= 100.00)
       {
         saldoCheque = 100;
         printf ("O limite do cheque especial é de: %.2lf \n", saldoCheque);
       }
       else
       {
         printf ("O limite do cheque especial é de: %.2lf \n", saldoCheque);
       }
         printf ("O limite tatal da conta é de: %.2lf \n", saldoConta);
    }
    else if (operacao == 3)
    {
       printf ("Digite o valor a ser sacado: ");
       scanf ("%lf", &valorSaque);
	  
       if (valorSaque <= saldoConta)
       {
          saldoConta -= valorSaque;
          limiteConta -= valorSaque;
       }
       else
       {
          printf ("Saldo insuficiente");
       }
    }
    else if (operacao == 4)
    {
       saldoCheque = limiteConta + chequeEspecial;
	  
       if (saldoCheque >= 100.00)
       {
          saldoCheque = 100;
	  printf ("O limite é de: %.2lf \n", saldoCheque);
       }
       else
       {
	   printf ("O limite é de: %.2lf \n", saldoCheque);
       }
    }
    else{
       printf("operacao invalida\n");
    }
    printf ("\nQual operacao deseja realizar: ");
    scanf ("%d", &operacao);
  }	
}