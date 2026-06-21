////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program210.c
//  Description :   Demonstrates manual string initialization
//                  using individual characters and a null
//                  terminator, then displays the string.
//  Author :        Varad Nitin Muley
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

int main ()
{
    char Arr[] = {'H', 'E', 'L', 'L', 'O', '\0'};

    printf("%s\n", Arr);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : N/A
//  Output : HELLO
//
//  Explanation :
//  The character array is initialized manually
//  with individual characters followed by the
//  null terminator '\0'. The %s format specifier
//  prints the string until the null character
//  is encountered.
//
//  Input : N/A
//  Output : HELLO
//
//  Explanation :
//  The null terminator marks the end of the
//  string, allowing string functions and printf()
//  to process the array correctly.
//
/////////////////////////////////////////////////////////////////
