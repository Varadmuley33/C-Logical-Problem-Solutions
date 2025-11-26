////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program17.c
//  Description :   Accepts an integer from user and checks whether
//                  the number is Even or Odd using direct boolean logic.
//  Author :        Varad Nitin Muley
//  Date :          16/10/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////
//
// Required Header files
//
/////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   Returns true if the given number is even,
//                  otherwise returns false.
//  Input :         Integer
//  Output :        Boolean
//  Author :        Varad Nitin Muley
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    return ((iNo % 2) == 0);
}

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even number\n", iValue);
    }
    else
    {
        printf("%d is Odd number\n", iValue);
    }

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases
