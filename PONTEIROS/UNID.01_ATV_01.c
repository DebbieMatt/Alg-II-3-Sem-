#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	float b;
	
	a = 10;
	b = 15.8;
	
	if (&a > &b) 
		printf("\nO endereco de a: %d (%p) e maior que o endereco de b: %.1f (%p).\n\n", a, &a, b, &b);
	else 
		printf("\nO endereco de b: %.1f (%p) e maior que o endereco de a: %d (%p).\n\n", b, &b, a, &a);
		
	return 0;
}