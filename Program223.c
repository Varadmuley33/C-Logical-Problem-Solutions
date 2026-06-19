////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program223.c
//  Description :   Counts the number of occurrences of a specific
//                  character in the given string.
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

    printf("Enter string : \n");
    scanf("%[^'\n]s", Arr);

    iRet = CountOccurance(Arr, 'd');

    printf("Number of occurance are : %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : India
//  Output : Number of occurance are : 1
//
//  Input : Marvellous
//  Output : Number of occurance are : 0
//
//  Input : adddd
//  Output : Number of occurance are : 4
//
//  Input : dddddd
//  Output : Number of occurance are : 6
//
/////////////////////////////////////////////////////////////////
