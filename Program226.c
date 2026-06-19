////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program226.c
//  Description :   Counts the number of occurrences of a user-specified
//                  character in the given string using fflush(stdin)
//                  before accepting character input.
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
//  Function Name : CountOccurance
//  Description :   Counts the number of occurrences of the
//                  specified character in the given string.
//  Input :         Character Array, Character
//  Output :        Integer
//  Author :        Varad Nitin Muley
//
/////////////////////////////////////////////////////////////////

int CountOccurance(char str[], char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';

    printf("Enter string : \n");
    scanf("%[^'\n]s", Arr);

    fflush(stdin);     // Not applicable on all OS

    printf("Enter the character : \n");
    scanf("%c", &cValue);

    iRet = CountOccurance(Arr, cValue);

    printf("Number of occurance are : %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  Output : Number of occurance are : 2
//
//  Input : Hello World
//          o
//  Output : Number of occurance are : 2
//
//  Input : India
//          a
//  Output : Number of occurance are : 1
//
//  Input : ABCDEF
//          Z
//  Output : Number of occurance are : 0
//
/////////////////////////////////////////////////////////////////
