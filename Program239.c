////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program239.c
//  Description :   Toggles the case of alphabetic characters in
//                  the given string.
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
//  Function Name : strtoggleX
//  Description :   Converts lowercase characters to uppercase
//                  and uppercase characters to lowercase.
//  Input :         Character Array
//  Output :        Void
//  Author :        Varad Nitin Muley
//
/////////////////////////////////////////////////////////////////

void strtoggleX(char str[])
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }

        str++;
    }
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main ()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);

    strtoggleX(Arr);

    printf("Updated string is : %s\n" ,Arr);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Marvellous
//  Output : mARVELLOUS
//
//  Input : HELLOworld
//  Output : helloWORLD
//
//  Input : Pune123
//  Output : pUNE123
//
/////////////////////////////////////////////////////////////////
