////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program217.c
//  Description :   Calculates and returns the length of the given
//                  string without using the library function strlen().
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
//  Function Name : strlenX
//  Description :   Counts the number of characters present in
//                  the given string and returns its length.
//  Input :         Character Array
//  Output :        Integer
//  Author :        Varad Nitin Muley
//
/////////////////////////////////////////////////////////////////

int strlenX(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
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

    iRet = strlenX(Arr);

    printf("Length of string is : %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Hello
//  Output : Length of string is : 5
//
//  Input : Marvellous
//  Output : Length of string is : 10
//
/////////////////////////////////////////////////////////////////
