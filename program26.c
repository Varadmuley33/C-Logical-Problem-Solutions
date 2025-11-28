////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program26.c
//  Description :   Demonstrates dynamic function usage in C by printing
//                  a message based on user-entered frequency.
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
//  Input :         Integer
//  Output :        void
//
/////////////////////////////////////////////////////////////////

void Display(int iFrequency)
{
    int iCnt = 0;                              // Loop counter

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("Jay Ganesh...\n");             // Repeated message
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

    Display(iCount);                           // Function call

    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 3
//  Output : Jay Ganesh... (3 times)
//
//  Input : 1
//  Output : Jay Ganesh... (1 time)
//
//  Input : 0
//  Output : (No output)
//
//  Input : 5
//  Output : Jay Ganesh... (5 times)
//
/////////////////////////////////////////////////////////////////
