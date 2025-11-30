//Input : 12     2                 Output : True
//Input : 12     3                 Output : True
//Input : 12     5                 Output : false
//Input : 12     12                Output : false

#include<stdio.h>
#include<stdbool.h>


bool CheckDivisible(int iNo1 , int iNo2 )
{
    if((iNo1 % iNo2 ) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int iValue1 = 0 , iValue2 = 0;
    bool bRet = false;

    printf ("Enter first Number : ");
    scanf("%d",&iValue1);

    printf ("Enter Second Number : ");
    scanf("%d",&iValue2);

    bRet = CheckDivisible(iValue1 , iValue2);

    if(bRet == true)
    {
        printf("It is completely divisible");
    }
    else
    {
        printf("It is not completely divisible");
    }
    return 0;

}