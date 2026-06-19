////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program222.c
//  Description :   Counts the number of vowels (both uppercase and
//                  lowercase) present in the given string.
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
//  Description :   Counts the number of vowels (both uppercase
//                  and lowercase) present in the given string.
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
        if((*str == 'e') || (*str == 'a') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
           (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
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

    printf("Count of vowels are : %d\n", iRet);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Hello
//  Output : Count of vowels are : 2
//
//  Input : HELLO
//  Output : Count of vowels are : 2
//
//  Input : Marvellous Infosystems
//  Output : Count of vowels are : 7
//
//  Input : XYZ
//  Output : Count of vowels are : 0
//
/////////////////////////////////////////////////////////////////
