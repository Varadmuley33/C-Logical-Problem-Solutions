#include<stdio.h>

int AddInt(int No1, int No2)
{
    int Ans;
    Ans = No1 + No2;
    return Ans;
}

float AddFloat(float No1, float No2)
{
    float Ans;
    Ans = No1 + No2;
    return Ans;
}

double AddDouble(double No1, double No2)
{
    double Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    int iValue1 = 10, iValue2 = 11, iRet = 0;
    float fValue1 = 10.0f, fValue2 = 11.0f, fRet = 0.0f;
    double dValue1 = 10.0, dValue2 = 11.0, dRet = 0.0;

    iRet = AddInt(iValue1, iValue2);
    printf("Addition of int : %d\n", iRet);

    fRet = AddFloat(fValue1, fValue2);
    printf("Addition of float : %f\n", fRet);

    dRet = AddDouble(dValue1, dValue2);
    printf("Addition of double : %lf\n", dRet);

    return 0;
}
