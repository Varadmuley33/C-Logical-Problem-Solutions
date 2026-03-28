#include<stdio.h>

int CountFrequency (float Arr[] , int iSize, float No)
{
    int iCnt = 0;
    int iMax;
    int iCount = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt]  == No)
        {
           iCount++;
        }
    }

    return iCount;
}

int main ()
{
    float Brr[] = {10.1f ,20.2f , 30.3f , 40.4f , 50.5f,20.2f};
    int iRet = 0;

    iRet = CountFrequency(Brr , 6 ,20.2f );

    printf("Frequency is :%d\n",iRet);

    return 0;
}
