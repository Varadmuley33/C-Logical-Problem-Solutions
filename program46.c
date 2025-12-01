////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program46.c
//  Description :   Demonstrates the wrong approach to display factors of
//                  a number by manually checking each possible divisor.
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
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
//  Function Name : DisplayFactors
//  Description :   Prints factors of iNo using multiple if conditions
//                  (Not an efficient approach)
//
//  Input :         Integer
//  Output :        void
//
/////////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
    // Checking divisibility manually (wrong approach)
    if((iNo % 1) == 0)
    {
        printf("1\n");
    }
    if((iNo % 2) == 0)
    {
        printf("2\n");
    }
    if((iNo % 3) == 0)
    {
        printf("3\n");
    }
    if((iNo % 4) == 0)
    {
        printf("4\n");
    }
    if((iNo % 5) == 0)
    {
        printf("5\n");
    }
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    DisplayFactors(iValue);                // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 6
//  Output : 1  2  3  (4 and 5 are skipped because they are not factors)
//
//  Input : 10
//  Output : 1  2  5
//
//  Input : 12
//  Output : 1  2  3  4
//
/////////////////////////////////////////////////////////////////
