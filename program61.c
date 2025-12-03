////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program61.c
//  Description :   Demonstrates digit extraction of a fixed number (7236)
//                  while displaying both the extracted digit and the
//                  updated remaining number after each step.
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
    int iNo = 7236;                 // Predefined number
    int iDigit = 0;                 // To store extracted digit

    iDigit = iNo % 10;
    printf("iDigit is : %d\n", iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n", iNo);

    iDigit = iNo % 10;
    printf("iDigit is : %d\n", iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n", iNo);

    iDigit = iNo % 10;
    printf("iDigit is : %d\n", iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n", iNo);

    iDigit = iNo % 10;
    printf("iDigit is : %d\n", iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n", iNo);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcase successfully handled by the application
//
//  Input  : None (Static value = 7236)
//  Output : Shows digit extraction and remaining number step-by-step
//
/////////////////////////////////////////////////////////////////
