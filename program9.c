////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program9.c
//  Description :   Accepts two floating point numbers from user and
//                  performs their addition after converting negative
//                  values into positive form.
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
        If input is negative convert into positive
        Perform addition of No1 and No2
        Display result on screen
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
//  Description :   Converts negative floating point values into
//                  positive and returns their addition.
//  Input :         Float, Float
//  Output :        Float
//  Author :        Varad Nitin Muley
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0.0f;

    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;            // Business logic

    return fSum;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    float fRet = 0.0f;

    printf("Enter first number : \n");
    scanf("%f", &fValue1);

    printf("Enter second number : \n");
    scanf("%f", &fValue2);
    
    fRet = AdditionTwoNumbers(fValue1, fValue2);

    printf("Addition is : %f\n", fRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : -5.5   -4.5
//  Output : Addition is : 10.000000
//
//  Input : -3.0   7.0
//  Output : Addition is : 10.000000
//
//  Input : 2.5   3.5
//  Output : Addition is : 6.000000
//
/////////////////////////////////////////////////////////////////
