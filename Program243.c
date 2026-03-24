#include<stdio.h>
#include<string.h>

int main()
{
    int iCnt = 0;
    char str[100];

    printf("Enter string : \n");
    scanf(" %[^\n]",str);

    for(iCnt = 0 ; iCnt < strlen(str) ; iCnt++)
    {
        printf("%c\n",str[iCnt]);
    }

    return 0;
}
