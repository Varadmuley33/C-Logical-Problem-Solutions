#include<stdio.h>

int Summation (int Arr[] , int iSize)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main ()
{
    int Brr[] = {10 ,20 , 30 , 40 , 50 };
    int iRet = 0;

    iRet = Summation(Brr , 5);

    printf("Summation is :%d\n",iRet);

    return 0;
}
