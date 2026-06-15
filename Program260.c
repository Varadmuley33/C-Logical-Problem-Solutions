////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program260.c
//  Description :   Accepts a string from the user, reverses the string
//                  in place, and displays the updated string.
//  Author :        Varad Nitin Muley
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


void strRevx(char *str )
{
    char *start = str;
    char *end = str;
    char temp = '\0';


    while(*end != '\0')
    {
        end++;
    }


/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Reverses the given string by swapping characters from
//  both ends
//
/////////////////////////////////////////////////////////////////

void strRevx(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
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

    strRevx(Arr);

    printf("Updated string is : %s\n",Arr);

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
    end--;
    while(start < end)
    {
       temp = *start;
       *start = *end;
       *end = temp;

       start++;
       end--;
    }
}

