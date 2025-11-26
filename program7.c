////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program7.c
//  Description :   Accepts two integers from user and returns their
//                  addition using a user-defined function.
//  Author :        Varad Nitin Muley
//  Date :          16/10/2025
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
//  Function Name : AdditionTwoNumbers
//  Description :   It performs addition of two integer values and
//                  returns the result.
//  Input :         Integer, Integer
//  Output :        Integer
//  Author :        Varad Nitin Muley
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////////

int AdditionTwoNumbers(int iNo1, int iNo2)
{
    int sum = 0;                         // Variable to store sum
    sum = iNo1 + iNo2;                   // Business logic
    return sum;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{ 
    int iValue1 = 0, iValue2 = 0;        // Variables to store user input
    int iRet = 0;                        // Variable to store result
   
    printf("Enter first number : ");
    scanf("%d", &iValue1);

    printf("Enter second number : ");
    scanf("%d", &iValue2);

    iRet = AdditionTwoNumbers(iValue1, iValue2);

    printf("Addition is : %d\n", iRet);
    
    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 5   10
//  Output : Addition is : 15
//
//  Input : -10   20
//  Output : Addition is : 10
//
//  Input : 0   0
//  Output : Addition is : 0
//
/////////////////////////////////////////////////////////////////
