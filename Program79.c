#include<stdio.h>

struct Number
{
    int i;
    int iSum;
};

int CheckPerfect(struct Number *this, int iNo)
{
    for(this->i = 1; this->i <= (iNo/2); this->i++)
    {
        if((iNo % this->i) == 0)
        {
            this->iSum = this->iSum + this->i;
        }
    }

    if(this->iSum == iNo)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    struct Number nobj;
    nobj.iSum = 0;

    bRet = CheckPerfect(&nobj, iValue);

    if(bRet == 1)
    {
        printf("%d is perfect number \n", iValue);
    }
    else
    {
        printf("%d is not a perfect number \n", iValue);
    }

    return 0;
}
