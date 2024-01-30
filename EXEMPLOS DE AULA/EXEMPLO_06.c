#include <stdio.h>
#include <stdlib.h>
  
int main(int argc, char *argv[])
{
  // declara e inicializa três variáveis
  int a = 23;
  int b = 40;
  int c = 3;
  
  // exibe seus valores
  printf("a = %d, b = %d, c = %d\n\n", a, b, c);
  
  // declara um ponteiro para uma variável do tipo int
  int *p;
  
  // aponta para a variável "a" e altera seu valor
  p = &a;
  *p = 12 * 2;
  
  // aponta para a variável "b" e altera seu valor
  p = &b;
  *p = 695;
  
  // aponta para a variável "c" e altera seu valor
  p = &c;
  *p = 90;
  
  // exibe os novos valores das variáveis
  printf("a = %d, b = %d, c = %d\n\n", a, b, c);
  
}