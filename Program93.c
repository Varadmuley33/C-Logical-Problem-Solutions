#include<stdio.h>

void main(char *A[])
{
    int Arr[] = {10,20,30,40};

    int i = 0;

    printf("Number of elements : %d\n", sizeof(Arr)/sizeof(Arr[0]));

    for(i = 0; i < sizeof(Arr)/sizeof(Arr[0]); i++)
    {
        printf("%d\n", Arr[i]);
    }
}
