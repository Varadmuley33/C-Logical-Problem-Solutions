#include <stdio.h>
#include <string.h>

struct StringX
{
};

char* toLowerCaseX(char str[])
{
    int iCnt = 0;

    static char Arr[100];

    strcpy(Arr, str);

    for(iCnt = 0; iCnt < strlen(Arr); iCnt++)
    {
        if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
        {
            Arr[iCnt] = Arr[iCnt] + 32;
        }
    }

    return Arr;
}

int main()
{
    char *sRet = NULL;
    char sobj[100];

    printf("Enter string : \n");
    fgets(sobj, sizeof(sobj), stdin);

    struct StringX strobj;

    sRet = toLowerCaseX(sobj);

    printf("Updated string  is : %s\n", sRet);

    return 0;
}
