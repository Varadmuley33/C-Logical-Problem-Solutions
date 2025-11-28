////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program23.c
//  Description :   Demonstrates how to reverse a user-entered integer
//                  using a loop and modulo operation in C.
//  Author :        Varad Nitin Muley
//  Date :          17/10/2025
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
//  Function Name : Reverse
//  Description :   Returns the reverse of a given integer
//  Input :         Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////

int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;                 // Updator for negative numbers
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;          // Extract last digit
        iRev = (iRev * 10) + iDigit;// Build reverse number
        iNo = iNo / 10;             // Remove last digit
    }

    return iRev;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);         // Function call

    printf("Reverse number is : %d\n", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 7531
//  Output : Reverse number is : 1357
//
//  Input : -980
//  Output : Reverse number is : 89
//
//  Input : 5
//  Output : Reverse number is : 5
//
/////////////////////////////////////////////////////////////////
