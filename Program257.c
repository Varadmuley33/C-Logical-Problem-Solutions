////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program257.c
//  Description :   Accepts a string from the user, copies the contents
//                  of one string into another string, and displays the
//                  copied string.
//  Author :        Varad Nitin Muley
//
////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>


void strcpyX(char *src , char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Copies all characters from the source string to the
//  destination string
//
/////////////////////////////////////////////////////////////////

void strcpyX(char *src , char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strcpyX(Arr,Brr);

    printf("Copied String is : %s\n",Brr);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Hello
//  Output : Hello
//
//  Input : Marvellous Infosystems
//  Output : Marvellous Infosystems
//
//  Input : Pune
//  Output : Pune
//
/////////////////////////////////////////////////////////////////
