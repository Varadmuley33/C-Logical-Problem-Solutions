////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program27.c
//  Description :   Demonstrates dynamic message printing with validation
//                  by accepting frequency from the user and applying a
//                  filter for negative input.
//  Author :        Varad Nitin Muley
//  Date :          17/11/2025
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
//  Function Name : Display
//  Description :   Prints "Jay Ganesh..." iFrequency times
//                  Handles negative input using filter logic
//  Input :         Integer
//  Output :        void
//
/////////////////////////////////////////////////////////////////

void Display(int iFrequency)
{
    int iCnt = 0;                                  // Loop counter

    // Filter for invalid input
    if(iFrequency < 0)
    {
        printf("Invalid input\n");
        return;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("Jay Ganesh...\n");                 // Repeated message
    }
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iCount = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iCount);

    Display(iCount);                               // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 4
//  Output : Jay Ganesh... (4 times)
//
//  Input : -3
//  Output : Invalid input
//
//  Input : 0
//  Output : (No output)
//
//  Input : 2
//  Output : Jay Ganesh... (2 times)
//
/////////////////////////////////////////////////////////////////
