#include<stdio.h>

int CheckPerfect(int iNo)
{
    int i = 0;
    int iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= (iNo/2); i++)
    {
        if((iNo % i) == 0)
        {
            iSum = iSum + i;
        }

        if(iSum > iNo)
        {
            break;
        }
    }

    return (iSum == iNo);
}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == 1)
    {
        printf("%d is perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }

    return 0;
}
