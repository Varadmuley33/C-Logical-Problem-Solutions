#include<stdio.h>

void Display(int Brr[], int length)
{
    int i = 0;

    for(i = 0; i < length; i++)
    {
        printf("%d\n", Brr[i]);
    }
}

void main(char *A[])
{
    int Arr[] = {10,20,30,40};

    Display(Arr, sizeof(Arr)/sizeof(Arr[0]));
}
