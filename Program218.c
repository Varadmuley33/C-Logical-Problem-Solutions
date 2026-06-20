////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program218.c
//  Description :   Counts the number of occurrences of character
//                  'a' in the given string.
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
//  Description :   Counts the number of occurrences of character
//                  'a' present in the given string.
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
        if(*str == 'a')
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

    printf("Count of a is : %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Marvellous
//  Output : Count of a is : 1
//
//  Input : Banana
//  Output : Count of a is : 3
//
/////////////////////////////////////////////////////////////////
