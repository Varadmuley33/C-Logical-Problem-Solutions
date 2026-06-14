////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program256.c
//  Description :   Accepts a string from the user and toggles the case
//                  of each alphabetic character. Uppercase characters
//                  are converted to lowercase and vice versa.
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
//  Toggles the case of all alphabetic characters in the string
//
/////////////////////////////////////////////////////////////////

char* StrToggleX(char str[])
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
        else if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
        {
            Arr[iCnt] = Arr[iCnt] - 32;
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

    sRet = StrToggleX(sobj);

    printf("Updated string  is : %s\n", sRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Hello
//  Output : hELLO
//
//  Input : MARVELLOUS
//  Output : marvellous
//
//  Input : India123
//  Output : iNDIA123
//
/////////////////////////////////////////////////////////////////
