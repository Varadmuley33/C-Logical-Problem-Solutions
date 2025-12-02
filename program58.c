////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program58.c
//  Description :   Prime number checking using flag initialization
//                  outside and updation before loop.
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
#include<stdbool.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : checkPrime
//  Description :   Returns true if number is prime, false otherwise
//  Input :         Integer
//  Output :        Boolean
//
/////////////////////////////////////////////////////////////////

bool checkPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;                 // Changed initialization (as you wrote)

    if(iNo < 0)
    {
        iNo = -iNo;                     // Updator for negative input
    }

    bFlag = true;                       // Mark as prime initially

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;              // Factor found → not prime
            break;                      // Optimization
        }
    }

    return bFlag;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    bRet = checkPrime(iValue);

    if(bRet == true)
    {
        printf("%d is a prime number\n", iValue);
    }
    else
    {
        printf("%d is not a prime number\n", iValue);
    }

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 19
//  Output : 19 is a prime number
//
//  Input : 20
//  Output : 20 is not a prime number
//
//  Input : 2
//  Output : 2 is a prime number
//
/////////////////////////////////////////////////////////////////

/*
    Time Complexity:
        Prime number     : O(N/2)
        Non-prime number : O(1) or O(2)
*/
