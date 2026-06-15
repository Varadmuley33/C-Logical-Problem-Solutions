////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program258.c
//  Description :   Accepts source and destination strings from the user,
//                  appends the source string to the end of the
//                  destination string, and displays the updated string.
//  Author :        Varad Nitin Muley
//
////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>


void strcatX(char *src , char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }
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
//  Appends the source string at the end of the
//  destination string
//
/////////////////////////////////////////////////////////////////

void strcatX(char *src , char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';    // *dest = *src; works same like the written condition
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

    printf("Enter Source string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter destination string : \n");
    scanf(" %[^'\n']s",Brr);

    strcatX(Arr,Brr);

    printf("Udpdated String is : %s\n",Brr);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Hello
//          World
//  Output : WorldHello
//
//  Input : Infosystems
//          Marvellous
//  Output : MarvellousInfosystems
//
//  Input : City
//          Pune
//  Output : PuneCity
//
/////////////////////////////////////////////////////////////////
