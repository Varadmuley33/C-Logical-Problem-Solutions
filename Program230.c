////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program230.c
//  Description :   Counts the number of capital and small characters
//                  present in the given string.
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
//  Function Name : CountAll
//  Description :   Counts capital and small characters present
//                  in the given string.
//  Input :         Character Array
//  Output :        Void
//  Author :        Varad Nitin Muley
//
/////////////////////////////////////////////////////////////////

void CountAll(char str[])
{
    int iCountSmall = 0;
    int iCountCapital = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        else
        {
            iCountSmall++;
        }

        str++;
    }

    printf("Count of Capital characters is : %d\n", iCountCapital);
    printf("Count of Small characters is : %d\n", iCountSmall);
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n]s", Arr);

    CountAll(Arr);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : AbcDef
//  Output : Count of Capital characters is : 2
//           Count of Small characters is : 4
//
//  Input : HELLO
//  Output : Count of Capital characters is : 5
//           Count of Small characters is : 0
//
//  Input : abcdef
//  Output : Count of Capital characters is : 0
//           Count of Small characters is : 6
//
//  Input : Marvellous
//  Output : Count of Capital characters is : 1
//           Count of Small characters is : 9
//
/////////////////////////////////////////////////////////////////
