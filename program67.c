////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program67.c
//  Description :   Displays each digit of the given number using iterative
//                  division and modulus operations.
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
//  Function Name : DisplayDigits
//  Description :   Extracts and displays digits of the number
//                  one by one using iteration.
//  Input :         Integer
//  Output :        None
//
/////////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
    int iDigit = 0;             // To store extracted digit

    printf("-----------------------------------------------------\n");
    printf("Original value of iNo is : %d\n", iNo);

    // Iterate until all digits are processed
    while(iNo != 0)
    {
        printf("-----------------------------------------------------\n");

        iDigit = iNo % 10;      // Extract last digit
        printf("iDigit is : %d\n", iDigit);

        iNo = iNo / 10;         // Remove last digit
        printf("iNo is : %d\n", iNo);
    }

    printf("-----------------------------------------------------\n");
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    DisplayDigits(iValue);      // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Note : This program demonstrates digit extraction using
//         iteration. Each step prints intermediate results.
//
//  Time Complexity : O(N)   (N = number of digits)
//
/////////////////////////////////////////////////////////////////
