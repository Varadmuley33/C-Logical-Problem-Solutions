////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program248.c
//  Description :   Accepts a string from the user, copies it into a
//                  local array inside a user-defined function, and
//                  displays each character on a separate line.
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
//  Structure definition
//
/////////////////////////////////////////////////////////////////

struct StringX
{
};

/////////////////////////////////////////////////////////////////
//
//  User-defined function to display characters of a string
//
/////////////////////////////////////////////////////////////////

void Display(char str[])
{
    int iCnt = 0;

    char Arr[100];
    int iLength = 0;

    while(str[iLength] != '\0')
    {
        Arr[iLength] = str[iLength];
        iLength++;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%c\n", Arr[iCnt]);
    }
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    char sobj[100];
    int iLength = 0;
    char ch;

    printf("Enter string : \n");

    while((ch = getchar()) != '\n' && ch != EOF)
    {
        sobj[iLength] = ch;
        iLength++;
    }
    sobj[iLength] = '\0';

    struct StringX strobj;

    Display(sobj);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Hello
//  Output : H
//           e
//           l
//           l
//           o
//
//  Input : Pune
//  Output : P
//           u
//           n
//           e
//
//  Input : India
//  Output : I
//           n
//           d
//           i
//           a
//
/////////////////////////////////////////////////////////////////
