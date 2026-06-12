////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program250.c
//  Description :   Accepts a string from the user and counts the
//                  number of lowercase alphabet characters present
//                  in the string.
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
//  Structure definition
//
/////////////////////////////////////////////////////////////////

struct StringX
{
};

/////////////////////////////////////////////////////////////////
//
//  User-defined function to count lowercase characters
//
/////////////////////////////////////////////////////////////////

int CountSmall(char str[])
{
    int iCnt = 0;
    int iCount = 0;

    char Arr[100];
    strcpy(Arr, str);

    for(iCnt = 0; iCnt < strlen(Arr); iCnt++)
    {
        if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
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

    iRet = CountSmall(sobj);

    printf("Frequency of small characters is : %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Marvellous Infosystems
//  Output : Frequency of small characters is : 19
//
//  Input : HELLO World
//  Output : Frequency of small characters is : 5
//
//  Input : Pune123
//  Output : Frequency of small characters is : 3
//
/////////////////////////////////////////////////////////////////
