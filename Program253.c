#include <stdio.h>
#include <string.h>

struct StringX
{
};

char* Update(char str[])
{
    static char Arr[100];

    strcpy(Arr, str);

    Arr[0] = '_';

    return Arr;
}

int main()
{
    char *sRet = NULL;
    char sobj[100];

    printf("Enter string : \n");
    fgets(sobj, sizeof(sobj), stdin);

    struct StringX strobj;

    sRet = Update(sobj);

    printf("Updated string  is : %s\n", sRet);

    return 0;
}
