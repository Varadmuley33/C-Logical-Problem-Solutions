#include<stdio.h>
#include<stdlib.h>

void main(char *A[])
{
    int *Arr = NULL;

    Arr = (int *)malloc(4 * sizeof(int));

    printf("Number of elements : %d\n", 4);
    printf("%d\n", Arr[0]);
    printf("%d\n", Arr[1]);
    printf("%d\n", Arr[2]);
    printf("%d\n", Arr[3]);
}
