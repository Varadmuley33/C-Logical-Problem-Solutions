////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program15.c
//  Description :   Accepts an integer from user and displays whether
//                  the number is Even or Odd using a boolean function.
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
//  Description :   Checks whether the given integer is even.
//  Input :         Integer
//  Output :        Boolean (true if even, false if odd)
//  Author :        Varad Nitin Muley
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
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

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even number\n", iValue);
    }
    else
    {
        printf("%d is Odd number\n", iValue);
    }

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 18
//  Output : 18 is Even number
//
//  Input : 7
//  Output : 7 is Odd number
//
//  Input : 0
//  Output : 0 is Even number
//
/////////////////////////////////////////////////////////////////
