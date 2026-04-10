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

    printf("Enter the size of array : \n");
    scanf("%d",&iSize);

    int *Arr = NULL;
    Arr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");

    scanf("%d",&Arr[0]);
    scanf("%d",&Arr[1]);
    scanf("%d",&Arr[2]);
    scanf("%d",&Arr[3]);
    scanf("%d",&Arr[4]);

    Display(Arr, iSize);
}
