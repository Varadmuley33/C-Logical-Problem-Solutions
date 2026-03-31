#include <stdio.h>
#include <string.h>

int main()
{
    int iCnt = 0;

    char sobj[100];

    printf("Enter string : \n");
    fgets(sobj, sizeof(sobj), stdin);

    char Arr[100];
    strcpy(Arr, sobj);

    for(iCnt = 0; iCnt < strlen(Arr); iCnt++)
    {
        if(Arr[iCnt] != '\n')
        {
            printf("%c\n", Arr[iCnt]);
        }
    }

    return 0;
}
