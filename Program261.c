#include<stdio.h>

int Add(int No1, int No2)
{
    int Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int iValue1 = 10, iValue2 = 11;
    int iRet = 0;

    iRet = Add(iValue1, iValue2);

    printf("%d", iRet);

    return 0;
}
