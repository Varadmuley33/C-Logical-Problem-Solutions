////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program66.c
//  Description :   Demonstrates digit extraction using iteration. The program
//                  accepts a number from the user and prints each digit along
//                  with the updated value of the number after removing digits.
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
    int iNo = 0;                     // Number entered by user
    int iDigit = 0;                  // Extracted digit

    printf("Enter the number : ");
    scanf("%d", &iNo);

    printf("-----------------------------------------------------\n");
    printf("Original value of iNo is : %d\n", iNo);

    // Iteratively extract digits until the number becomes zero
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
//  This program demonstrates the need of iteration for repetitive
//  operations like digit extraction.
//
//  Time Complexity : O(N)   (N = number of digits)
//
/////////////////////////////////////////////////////////////////
