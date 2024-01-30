#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 17;
    int *ptr1 = &a;
    int **ptr2 = (int **)&ptr1;

    printf("%d \n", a);
    printf("%d \n", *ptr1);
    printf("%d \n", **ptr2);
}