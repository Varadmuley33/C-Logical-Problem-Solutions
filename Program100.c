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
    int iSize = 0;
    int i = 0;

    printf("Enter the size of array : \n");
    scanf("%d",&iSize);

    int *Arr = NULL;
    Arr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }

    Display(Arr, iSize);
}
