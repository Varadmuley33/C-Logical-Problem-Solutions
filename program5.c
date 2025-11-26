////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program5.c
//  Description :   Application which accepts two integers from user
//                  and performs their addition.
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
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{ 
    int i = 0, j = 0;                     // Variables to store user input
    int ans = 0;                          // Variable to store result

    printf("Enter first number : ");
    scanf("%d", &i);

    printf("Enter second number : ");
    scanf("%d", &j);
    
    ans = i + j;                          // Business logic

    printf("Addition is : %d\n", ans);   // Display result
    
    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 10  20
//  Output : Addition is : 30
//
//  Input : -5  15
//  Output : Addition is : 10
//
//  Input : 0  0
//  Output : Addition is : 0
//
/////////////////////////////////////////////////////////////////
