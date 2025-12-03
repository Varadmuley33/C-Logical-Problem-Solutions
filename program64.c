////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program64.c
//  Description :   Demonstrates the need for iteration by manually extracting
//                  each digit of a number (723614) using repeated modulo and
//                  division operations.
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
    int iNo = 723614;                // Given number
    int iDigit = 0;                  // To extract each digit

    printf("-----------------------------------------------------\n");
    printf("Original value of iNo is : %d\n", iNo);
    printf("-----------------------------------------------------\n");

    // Extract last digit
    iDigit = iNo % 10;
    printf("iDigit is : %d\n", iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n", iNo);
    printf("-----------------------------------------------------\n");

    // Extract next digit
    iDigit = iNo % 10;
    printf("iDigit is : %d\n", iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n", iNo);
    printf("-----------------------------------------------------\n");

    // Extract next digit
    iDigit = iNo % 10;
    printf("iDigit is : %d\n", iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n", iNo);
    printf("-----------------------------------------------------\n");

    // Extract next digit
    iDigit = iNo % 10;
    printf("iDigit is : %d\n", iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n", iNo);
    printf("-----------------------------------------------------\n");

    // Extract next digit
    iDigit = iNo % 10;
    printf("iDigit is : %d\n", iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n", iNo);
    printf("-----------------------------------------------------\n");

    // Extract next digit
    iDigit = iNo % 10;
    printf("iDigit is : %d\n", iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n", iNo);
    printf("-----------------------------------------------------\n");

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Note :
//  This program manually repeats the same logic multiple times.
//  It demonstrates *why loops are essential* in programming.
//
//  Without iteration → Code becomes long, repetitive, and error-prone.
//
/////////////////////////////////////////////////////////////////
