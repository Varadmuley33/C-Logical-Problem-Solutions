#include<stdio.h>

long CalculateFactorial(int iNo)
{
    int i = 0;
    long iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    i = 1;

    while(i <= iNo)
    {
        iFact = iFact * i;
        i++;
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
