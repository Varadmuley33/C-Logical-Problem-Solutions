////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program80.c
//  Description :   Accept a number from the user and check whether it is
//                  a perfect number using a structure and a separate function.
//  Author :        Varad Nitin Muley
//
////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Structure Name : Number
//  Description    : Stores the loop counter and the sum of factors.
//
/////////////////////////////////////////////////////////////////

struct Number
{
    int i;
    int iSum;
};

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckPerfect
//  Description   : Checks whether the given number is a perfect number.
//  Input         : Structure Pointer, Integer
//  Output        : Integer
//
/////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 6
//  Output :
//  6 is perfect number
//
//  Input : 8
//  Output :
//  8 is not a perfect number
//
/////////////////////////////////////////////////////////////////
