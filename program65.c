////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program65.c
//  Description :   Demonstrates the use of iteration to extract digits from a
//                  number (723614) using modulo and division inside a loop.
//  Author :        Varad Nitin Muley
//  Date :          20/11/2025
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
    int iNo = 723614;                // Input number
    int iDigit = 0;                  // Extracted digit

    printf("-----------------------------------------------------\n");
    printf("Original value of iNo is : %d\n", iNo);

    // Loop continues until the number becomes 0
    while(iNo != 0)
    {
        printf("-----------------------------------------------------\n");

        iDigit = iNo % 10;           // Extract last digit
        printf("iDigit is : %d\n", iDigit);

        iNo = iNo / 10;              // Remove last digit
        printf("iNo is : %d\n", iNo);
    }

    printf("-----------------------------------------------------\n");

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Note :
//  This program shows how iteration (looping) simplifies repeated
//  operations, unlike manually writing multiple repeated steps.
//
//  Time Complexity : O(N) where N = number of digits.
//
/////////////////////////////////////////////////////////////////
