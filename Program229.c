////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program229.c
//  Description :   Counts the number of capital (uppercase) alphabetic
//                  characters present in the given string.
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
//  Function Name : CountCapital
//  Description :   Counts the number of uppercase alphabetic
//                  characters present in the given string.
//  Input :         Character Array
//  Output :        Integer
//  Author :        Varad Nitin Muley
//
/////////////////////////////////////////////////////////////////

int CountCapital(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    iRet = CountCapital(Arr);

    printf("Number of Capital characters are : %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Marvellous
//  Output : Number of Capital characters are : 1
//
//  Input : HELLO
//  Output : Number of Capital characters are : 5
//
//  Input : abcDEF
//  Output : Number of Capital characters are : 3
//
//  Input : abc123xyz
//  Output : Number of Capital characters are : 0
//
/////////////////////////////////////////////////////////////////
