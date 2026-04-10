#include<stdio.h>
#include<stdlib.h>

void main(char *A[])
{
    int *Arr = NULL;

    Arr = (int *)malloc(4 * sizeof(int));

    Arr[0] = 10;
    Arr[1] = 20;
    Arr[2] = 30;
    Arr[3] = 40;

    printf("%d\n", Arr[0]);
    printf("%d\n", Arr[1]);
    printf("%d\n", Arr[2]);
    printf("%d\n", Arr[3]);
}
