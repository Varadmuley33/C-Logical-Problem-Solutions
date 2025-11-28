////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program22.c
//  Description :   Demonstrates how to count the number of digits in a
//                  user-entered integer using looping logic.
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
//  Function Name : CountDigits
//  Description :   Returns the total number of digits in a number
//  Input :         Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////

int CountDigits(int iNo)
{
    int iCnt = 0;                     // Digit counter

    if(iNo < 0)
    {
        iNo = -iNo;                   // Updator for negative numbers
    }

    while(iNo != 0)
    {
        iNo = iNo / 10;               // Remove last digit
        iCnt++;                       // Count this digit
    }

    return iCnt;                      // Return final count
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);       // Function call

    printf("Number of digits are : %d\n", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 751
//  Output : Number of digits are : 3
//
//  Input : -12345
//  Output : Number of digits are : 5
//
//  Input : 0
//  Output : Number of digits are : 1
//
/////////////////////////////////////////////////////////////////
