////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program44.c
//  Description :   Checks whether the first number is completely divisible
//                  by the second number using a user-defined function.
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
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
//  Function Name : CheckDivisible
//  Description :   Returns true if iNo1 is completely divisible by iNo2
//  Input :         Integer, Integer
//  Output :        Boolean
//
/////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo1, int iNo2)
{
    if((iNo1 % iNo2) == 0)                    // Divisibility check
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
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter first Number : ");
    scanf("%d", &iValue1);

    printf("Enter second Number : ");
    scanf("%d", &iValue2);

    bRet = CheckDivisible(iValue1, iValue2);    // Function call

    if(bRet == true)
    {
        printf("It is completely divisible\n");
    }
    else
    {
        printf("It is not completely divisible\n");
    }

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : 12   2
//  Output : It is completely divisible
//
//  Input  : 12   3
//  Output : It is completely divisible
//
//  Input  : 12   5
//  Output : It is not completely divisible
//
//  Input  : 12   12
//  Output : It is completely divisible
//
/////////////////////////////////////////////////////////////////
