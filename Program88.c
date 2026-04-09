#include<stdio.h>

long CalculateFactorial(int iNo)
{
    int i = 0;
    long iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    long iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CalculateFactorial(iValue);
    printf("Factorial is : %ld\n",iRet);

    return 0;
}
