#include <stdio.h>
#include <stdlib.h>


void compare(int a, float b) {

	if ((float*)&a > &b) {
		printf("\nO endereco de a: %d (%p) é maior que o endereco de b: %.1f (%p).\n\n", a, &a, b, &b);
    }
    else{ 
		printf("\nO endereco de b: %.1f (%p) é maior que o endereco de a: %d (%p).\n\n", b, &b, a, &a);
    }
}
void main(){

    int a; 
    float b;

    printf("\nDigite um inteiro: ");
    scanf("%d", &a);
    printf("\nDigite um flutuante: ");
    scanf("%f", &b);
    compare(a, b);
}
