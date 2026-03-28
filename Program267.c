#include<stdio.h>

double Maximum(double No1 ,double No2 ,double No3)
{
    if((No1 > No2) && (No1 > No3))
    {
        return No1;
    }
    else if((No2 > No1) && (No2 > No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main ()
{
    double dValue1 = 20.0 , dValue2 = 11.0 ,dValue3 = 15.0,dRet = 0.0;

    dRet = Maximum(dValue1,dValue2,dValue3);
    printf("Maximum of three numbers is  : %lf\n",dRet);

    return 0;
}
