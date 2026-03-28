#include<stdio.h>

float Maximum (float Arr[] , int iSize)
{
    int iCnt = 0;
    float iMax;

    iMax = Arr[0];

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if((iMax < Arr[iCnt]))
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

int main ()
{
    float Brr[] = {10.1f ,20.2f , 30.3f , 40.4f , 50.5f };
    float fRet = 0.0f;

    fRet = Maximum(Brr , 5);

    printf("Maximum is :%f\n",fRet);

    return 0;
}
