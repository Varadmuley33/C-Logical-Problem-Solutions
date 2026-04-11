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

    printf("Elements of the array are \n");

    for(i = 0; i < iSize; i++)
    {
        printf("%d\n",Arr[i]);
    }
}

float Average(int Arr[], int iSize)
{
    int i = 0;
    int iSum = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    return (iSum / iSize);
}

int main()
{
    float fRet = 0.0f;

    int *Arr1 = NULL;
    int iSize1 = 5;

    printf("Inside constructor\n");
    Arr1 = (int *)malloc(iSize1 * sizeof(int));

    Accept(Arr1, iSize1);
    Display(Arr1, iSize1);
    fRet = Average(Arr1, iSize1);

    printf("Average is : %f\n", fRet);

    return 0;
}
