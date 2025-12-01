////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program43.c
//  Description :   Checks whether the first number is completely divisible
//                  by the second number using modulus operator.
//  Author :        Varad Nitin Muley
//  Date :          17/11/2025
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
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter first Number : ");
    scanf("%d", &iValue1);

    printf("Enter second Number : ");
    scanf("%d", &iValue2);

    if((iValue1 % iValue2) == 0)                // Check divisibility
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
//  Input : 12   2
//  Output : It is completely divisible
//
//  Input : 12   3
//  Output : It is completely divisible
//
//  Input : 12   5
//  Output : It is not completely divisible
//
//  Input : 12   12
//  Output : It is completely divisible
//
/////////////////////////////////////////////////////////////////
