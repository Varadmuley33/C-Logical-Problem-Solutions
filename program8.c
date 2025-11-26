////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program8.c
//  Description :   Accepts two floating point numbers from user and
//                  performs their addition using a separate function.
//  Author :        Varad Nitin Muley
//  Date :          16/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Problem Solving Steps
//
/////////////////////////////////////////////////////////////////
/*
    Step 1 : Understand the problem statement 
    Step 2 : Write the algorithm 
    Step 3 : Decide the programming language 
    Step 4 : Write the program 
    Step 5 : Test the program
*/

/////////////////////////////////////////////////////////////////
//
//  Algorithm
//
/////////////////////////////////////////////////////////////////
/*
    START  
        Accept first number as No1 
        Accept second number as No2 
        Perform addition on No1 and No2 
        Display addition on screen     
    STOP 
*/

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It performs addition of two float values and
//                  returns the result.
//  Input :         Float, Float
//  Output :        Float
//  Author :        Varad Nitin Muley
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;                    // Variable to store sum
    fSum = fNo1 + fNo2;                   // Business logic
    return fSum;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{ 
    float fValue1 = 0.0f, fValue2 = 0.0f;  // Variables to store user input
    float fRet = 0.0f;                     // Variable to store result
   
    printf("Enter first number : ");
    scanf("%f", &fValue1);

    printf("Enter second number : ");
    scanf("%f", &fValue2);

    fRet = AdditionTwoNumbers(fValue1, fValue2);

    printf("Addition is : %f\n", fRet);
    
    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 10.5   5.5
//  Output : Addition is : 16.000000
//
//  Input : -2.5   7.5
//  Output : Addition is : 5.000000
//
//  Input : 0.0   0.0
//  Output : Addition is : 0.000000
//
/////////////////////////////////////////////////////////////////
