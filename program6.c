////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program6.c
//  Description :   Application which accepts two integers from user
//                  and performs their addition using a separate
//                  function.
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
//  Function Name : Add
//  Description :   It is used to perform addition of two integers.
//  Input :         Integer, Integer
//  Output :        Integer (Addition result)
//  Author :        Varad Nitin Muley
//  Date :          16/10/2025
//
/////////////////////////////////////////////////////////////////

int Add(int A, int B)
{
    int sum = 0;                         // Variable to store sum
    sum = A + B;                         // Business logic
    return sum;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{ 
    int i = 0, j = 0;                    // Variables to store user input
    int ans = 0;                         // Variable to store result

    printf("Enter first number : ");
    scanf("%d", &i);

    printf("Enter second number : ");
    scanf("%d", &j);

    ans = Add(i, j);                     // Function call

    printf("Addition is : %d\n", ans);   // Display result
    
    return 0;
}   // End of main

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 10  15
//  Output : Addition is : 25
//
//  Input : -20  5
//  Output : Addition is : -15
//
//  Input : 0  100
//  Output : Addition is : 100
//
/////////////////////////////////////////////////////////////////
