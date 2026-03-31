#include <stdio.h>

struct StringX
{
};

void Display(char str[])
{
    int iCnt = 0;

    char Arr[100];
    int iLength = 0;

    while(str[iLength] != '\0')
    {
        Arr[iLength] = str[iLength];
        iLength++;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%c\n", Arr[iCnt]);
    }
}

int main()
{
    char sobj[100];
    int iLength = 0;
    char ch;

    printf("Enter string : \n");

    while((ch = getchar()) != '\n' && ch != EOF)
    {
        sobj[iLength] = ch;
        iLength++;
    }
    sobj[iLength] = '\0';

    struct StringX strobj;

    Display(sobj);

    return 0;
}
