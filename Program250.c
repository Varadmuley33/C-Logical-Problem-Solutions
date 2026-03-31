#include <stdio.h>
#include <string.h>

struct StringX
{
};

int CountSmall(char str[])
{
    int iCnt = 0;
    int iCount = 0;

    char Arr[100];
    strcpy(Arr, str);

    for(iCnt = 0; iCnt < strlen(Arr); iCnt++)
    {
        if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iRet = 0;

    char sobj[100];

    printf("Enter string : \n");
    fgets(sobj, sizeof(sobj), stdin);

    struct StringX strobj;

    iRet = CountSmall(sobj);

    printf("Frequency of small characters is : %d\n", iRet);

    return 0;
}
