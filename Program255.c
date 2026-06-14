////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program255.c
//  Description :   Accepts a string from the user, converts all
//                  uppercase characters into lowercase characters,
//                  and displays the updated string.
//  Author :        Varad Nitin Muley
//
////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <string.h>

struct StringX
{
};

/////////////////////////////////////////////////////////////////
//
//  Converts all uppercase characters of the string into
//  lowercase characters
//
/////////////////////////////////////////////////////////////////

char* toLowerCaseX(char str[])
{
    int iCnt = 0;

    static char Arr[100];

    strcpy(Arr, str);

    for(iCnt = 0; iCnt < strlen(Arr); iCnt++)
    {
        if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
        {
            Arr[iCnt] = Arr[iCnt] + 32;
        }
    }

    return Arr;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    char *sRet = NULL;
    char sobj[100];

    printf("Enter string : \n");
    fgets(sobj, sizeof(sobj), stdin);

    struct StringX strobj;

    sRet = toLowerCaseX(sobj);

    printf("Updated string  is : %s\n", sRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : HELLO
//  Output : hello
//
//  Input : Marvellous
//  Output : marvellous
//
//  Input : INDIA
//  Output : india
//
/////////////////////////////////////////////////////////////////
