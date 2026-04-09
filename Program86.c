#include<stdio.h>

int CalculateFactorial(int iNo)
{
    int i = 0;
    int iFact = 1;

    for(i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CalculateFactorial(iValue);
    printf("Factorial is : %d\n",iRet);

    return 0;
}
