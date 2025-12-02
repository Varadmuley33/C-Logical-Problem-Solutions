////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program60.c
//  Description :   Extracts and displays each digit of a fixed four-digit
//                  number (7236) one by one using modulus and division.
//  Author :        Varad Nitin Muley
//  Date :          19/11/2025
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
    int iNo = 7236;               // Predefined number
    int iDigit = 0;               // To store individual digits

    iDigit = iNo % 10;            // Extract last digit
    printf("%d", iDigit);
    iNo = iNo / 10;               // Remove last digit

    iDigit = iNo % 10;            // Next digit
    printf("%d", iDigit);
    iNo = iNo / 10;

    iDigit = iNo % 10;
    printf("%d", iDigit);
    iNo = iNo / 10;

    iDigit = iNo % 10;
    printf("%d", iDigit);
    iNo = iNo / 10;

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//  Output : 6327   (Digits printed in reverse order)
/////////////////////////////////////////////////////////////////
