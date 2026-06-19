////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program227.c
//  Description :   Counts the number of small (lowercase) alphabetic
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
//  Function Name : CountSmall
//  Description :   Counts the number of lowercase alphabetic
//                  characters present in the given string.
//  Input :         Character Array
//  Output :        Integer
//  Author :        Varad Nitin Muley
//
/////////////////////////////////////////////////////////////////

int CountSmall(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))
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

    iRet = CountSmall(Arr);

    printf("Number of small characters are : %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Marvellous
//  Output : Number of small characters are : 10
//
//  Input : HELLO
//  Output : Number of small characters are : 0
//
//  Input : AbCdEf
//  Output : Number of small characters are : 3
//
//  Input : abc123XYZ
//  Output : Number of small characters are : 3
//
/////////////////////////////////////////////////////////////////
