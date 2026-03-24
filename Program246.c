#include<stdio.h>

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

    printf("%c\n",Arr[0]);
    printf("%c\n",Arr[1]);
    printf("%c\n",Arr[2]);
    printf("%c\n",Arr[3]);
    printf("%c\n",Arr[4]);

    return 0;
}
