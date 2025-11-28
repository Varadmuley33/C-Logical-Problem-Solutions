////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program20.c
//  Description :   Demonstrates a simple program to find the maximum
//                  of two user-entered integers using a function.
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
//  Function Name : Maximum
//  Description :   Returns the larger number between two integers
//  Input :         Integer, Integer
//  Output :        Integer
//
/////////////////////////////////////////////////////////////////

int Maximum(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)                 // Comparison logic
    {
        return iNo1;
    }
    else
    {
        return iNo2;
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
    int iRet = 0;

    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter second number : ");
    scanf("%d",&iValue2);

    iRet = Maximum(iValue1, iValue2);   // Function call

    printf("Largest number is : %d\n", iRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 10   20
//  Output : Largest number is : 20
//
//  Input : -5   -2
//  Output : Largest number is : -2
//
//  Input : 7   7
//  Output : Largest number is : 7
//
/////////////////////////////////////////////////////////////////
