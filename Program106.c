#include<stdio.h>
#include<stdlib.h>

void Accept(int Arr[], int iSize)
{
    int i = 0;

    printf("Enter the elements of Array : \n");

    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }
}

void Display(int Arr[], int iSize)
{
    int i = 0;

    printf("elements of the array are \n");

    for(i = 0; i < iSize; i++)
    {
        printf("%d\n",Arr[i]);
    }
}

int main()
{
    int *Arr1 = NULL;
    int iSize1 = 5;

    printf("Inside constructor\n");
    Arr1 = (int *)malloc(iSize1 * sizeof(int));

    int *Arr2 = NULL;
    int iSize2 = 7;

    printf("Inside constructor\n");
    Arr2 = (int *)malloc(iSize2 * sizeof(int));

    return 0;
}
