#include<stdio.h>
#include<string.h>

void Display(char str[])
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < strlen(str) ; iCnt++)
    {
        printf("%c\n",str[iCnt]);
    }
}

int main()
{
    char sobj[100];

    printf("Enter string : \n");
    scanf(" %[^\n]",sobj);

    Display(sobj);

    return 0;
}
