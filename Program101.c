#include<stdio.h>
#include<stdlib.h>

void Display(int Brr[], int length)
{
    int i = 0;
    printf("Elements of the array are : \n");

    for(i = 0; i < length; i++)
    {
        printf("%d\n", Brr[i]);
    }
}

int CountEven(int Brr[], int length)
{
    int i = 0, iCount = 0;

    for(i = 0; i < length; i++)
    {
        if((Brr[i] % 2) == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

void main(char *A[])
{
    int iSize = 0, i = 0, iRet = 0;

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

    iRet = CountEven(Arr, iSize);

    printf("Even elements are : %d\n", iRet);
}
