////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program251.c
//  Description :   Accepts a string from the user and counts the
//                  number of capital characters present in it.
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
//  Counts the number of capital characters in the string
//
/////////////////////////////////////////////////////////////////

int CountCapital(char str[])
{
    int iCnt = 0;
    int iCount = 0;

    char Arr[100];
    strcpy(Arr, str);

    for(iCnt = 0; iCnt < strlen(Arr); iCnt++)
    {
        if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
        {
            iCount++;
        }
    }
    return iCount;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iRet = 0;

    char sobj[100];

    printf("Enter string : \n");
    fgets(sobj, sizeof(sobj), stdin);

    struct StringX strobj;

    iRet = CountCapital(sobj);

    printf("Frequency of Capital characters is : %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Hello World
//  Output : 2
//
//  Input : MARVELLOUS
//  Output : 10
//
//  Input : abcDefGhi
//  Output : 2
//
/////////////////////////////////////////////////////////////////
