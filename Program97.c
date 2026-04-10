#include<stdio.h>
#include<stdlib.h>

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
    int *Arr = NULL;

    Arr = (int *)malloc(4 * sizeof(int));

    Arr[0] = 10;
    Arr[1] = 20;
    Arr[2] = 30;
    Arr[3] = 40;

    Display(Arr, 4);
}
