////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program220.c
//  Description :   Counts the number of occurrences of characters
//                  'a' and 'A' in the given string.
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
//  Function Name : Count
//  Description :   Counts the number of occurrences of characters
//                  'a' and 'A' present in the given string.
//  Input :         Character Array
//  Output :        Integer
//  Author :        Varad Nitin Muley
//
/////////////////////////////////////////////////////////////////

int Count(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'a'))
        {
            iCount++;
        }

        str++;
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
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n]s", Arr);

    iRet = Count(Arr);

    printf("Count of a and A is : %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Apple
//  Output : Count of a and A is : 1
//
//  Input : America
//  Output : Count of a and A is : 2
//
/////////////////////////////////////////////////////////////////
