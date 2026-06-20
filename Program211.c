////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program211.c
//  Description :   Demonstrates the difference between sizeof()
//                  and strlen() for a character array.
//  Author :        Varad Nitin Muley
//
////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    char Arr[] = {'H','E','L','L','O','\0'};

    printf("%s\n", Arr);                  // HELLO

    printf("%ld\n", sizeof(Arr));         // 6

    printf("%d\n", strlen(Arr));          // 5

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : N/A
//  Output : HELLO
//           6
//           5
//
//  Explanation :
//  sizeof(Arr) returns the total memory occupied by the array
//  including the null character.
//
//  strlen(Arr) returns the length of the string excluding
//  the null character.
//
//  Input : N/A
//  Output : String = HELLO
//           Size   = 6
//           Length = 5
//
/////////////////////////////////////////////////////////////////
