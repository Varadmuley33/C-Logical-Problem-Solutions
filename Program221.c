////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program221.c
//  Description :   Counts the number of vowels present in the given string.
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
//  Function Name : CountVowels
//  Description :   Counts the number of vowels present
//                  in the given string.
//  Input :         Character Array
//  Output :        Integer
//  Author :        Varad Nitin Muley
//
/////////////////////////////////////////////////////////////////

int CountVowels(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'e') || (*str == 'a') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
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

    iRet = CountVowels(Arr);

    printf("Count of vowels is : %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Hello
//  Output : Count of vowels is : 2
//
//  Input : Marvellous
//  Output : Count of vowels is : 4
//
//  Input : abcdef
//  Output : Count of vowels is : 2
//
//  Input : xyz
//  Output : Count of vowels is : 0
//
/////////////////////////////////////////////////////////////////
