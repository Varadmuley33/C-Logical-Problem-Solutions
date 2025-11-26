////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program14.c
//  Description :   Accepts an integer from user and returns TRUE if
//                  the number is even, otherwise returns FALSE.
//  Author :        Varad Nitin Muley
//  Date :          16/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   Checks whether the given integer number is even.
//  Input :         Integer
//  Output :        Boolean (true if even, false if odd)
//  Author :        Varad Nitin Muley
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {
        return true;
    }
    else
    {
        return false;
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
    bool bRet = false;

    printf("Enter your number : ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    printf("Result is : %d\n", bRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 12
//  Output : Result is : 1
//
//  Input : 9
//  Output : Result is : 0
//
//  Input : 0
//  Output : Result is : 1
//
/////////////////////////////////////////////////////////////////
