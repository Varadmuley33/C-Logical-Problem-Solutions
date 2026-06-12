////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program246.c
//  Description :   Accepts a string from the user, copies it into
//                  another string, and displays the first five
//                  characters of the copied string.
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

int main()
{
    char sobj[100];
    char Arr[100];
    int iCnt = 0;

    printf("Enter string : \n");
    scanf(" %[^\n]",sobj);

    for(iCnt = 0 ; sobj[iCnt] != '\0' ; iCnt++)
    {
        Arr[iCnt] = sobj[iCnt];
    }
    Arr[iCnt] = '\0';

    printf("%c\n",Arr[0]);
    printf("%c\n",Arr[1]);
    printf("%c\n",Arr[2]);
    printf("%c\n",Arr[3]);
    printf("%c\n",Arr[4]);

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
//  Input : India
//  Output : I
//           n
//           d
//           i
//           a
//
//  Input : Pune City
//  Output : P
//           u
//           n
//           e
//            
//
/////////////////////////////////////////////////////////////////
