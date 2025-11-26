////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program11.c
//  Description :   Performs addition of two floating point numbers
//                  after converting negative inputs into positive.
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
//  Description :   Returns addition after normalizing negative
//                  values into positive form.
//  Input :         Float, Float
//  Output :        Float
//  Author :        Varad Nitin Muley
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                            float fNo1,             // First input
                            float fNo2              // Second input
                        )
{
    float fSum = 0.0f;                              // To store the result

    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;                             // Business Logic
    
    return fSum;
}   // End of AdditionTwoNumbers

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;           // To accept user input
    float fRet = 0.0f;                               // To store the result

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);
    
    fRet = AdditionTwoNumbers(fValue1,fValue2);     // Method call

    printf("Addition is : %f\n",fRet);

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : -10.5    3.2
//  Output : Addition is : 13.700000
//
//  Input : 6.5    3.5
//  Output : Addition is : 10.000000
//
//  Input : -4.0    -6.0
//  Output : Addition is : 10.000000
//
/////////////////////////////////////////////////////////////////
