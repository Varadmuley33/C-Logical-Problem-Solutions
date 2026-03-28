#include<stdio.h>

float Summation (float Arr[] , int iSize)
{
    float iSum;
    int iCnt = 0;

    for(iCnt = 1 , iSum = Arr[0]; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main ()
{
    float Brr[] = {10.1f ,20.2f , 30.3f , 40.4f , 50.5f };
    float fRet = 0.0f;

    fRet = Summation(Brr , 5);

    printf("Summation is :%f\n",fRet);

    return 0;
}
