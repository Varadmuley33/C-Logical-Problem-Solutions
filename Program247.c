////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program247.c
//  Description :   Accepts a string from the user, copies it into
//                  another string using strcpy(), and displays each
//                  character of the copied string on a separate line.
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
    int iCnt = 0;

    char sobj[100];

    printf("Enter string : \n");
    fgets(sobj, sizeof(sobj), stdin);

    char Arr[100];
    strcpy(Arr, sobj);

    for(iCnt = 0; iCnt < strlen(Arr); iCnt++)
    {
        if(Arr[iCnt] != '\n')
        {
            printf("%c\n", Arr[iCnt]);
        }
    }

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
