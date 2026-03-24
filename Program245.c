#include<stdio.h>
#include<string.h>

int main()
{
    char sobj[100];
    char Arr[100];
    int iCnt = 0;

    printf("Enter string : \n");
    scanf(" %[^\n]",sobj);

    for(iCnt = 0 ; sobj[iCnt] != '\0' ; iCnt++)
    {
        Arr[iCnt] = sobj[iCnt];
    }
    Arr[iCnt] = '\0';

    printf("%d\n",strlen(sobj));
    printf("%d\n",strlen(Arr));

    return 0;
}
