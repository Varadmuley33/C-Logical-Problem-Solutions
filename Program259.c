////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program259.c
//  Description :   Accepts a string from the user and displays the
//                  characters of the string in reverse order.
//  Author :        Varad Nitin Muley
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


void ReverseDisplay(char *str )
{
    char *temp = str;

    while(*str != '\0')
    {
        str++;
    }

    while(str >= temp)

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Displays the characters of the string in reverse order
//
/////////////////////////////////////////////////////////////////

void ReverseDisplay(char *str)
{
    char *temp = str;

    while(*str != '\0')
    {
        str++;
    }

    while(str >= temp)
    {
        printf("%c",*str);
        str--;
    }

    printf("\n");
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter  string : \n");
    scanf("%[^'\n']s",Arr);

    ReverseDisplay(Arr);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Hello
//  Output : olleH
//
//  Input : Marvellous
//  Output : suollevraM
//
//  Input : India
//  Output : aidnI
//
/////////////////////////////////////////////////////////////////
    {
        printf("%c",*str);
        str--;
    }

    printf("\n");

}
