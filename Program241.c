#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];

    printf("Enter string : \n");
    scanf(" %[^\n]",str);

    printf("Input is : %s\n",str);
    printf("Length of string is : %d\n",strlen(str));

    return 0;
}
