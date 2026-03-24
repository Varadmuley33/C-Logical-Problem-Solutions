#include<stdio.h>

int main()
{
    char str[100];

    printf("Enter string : \n");
    scanf(" %[^\n]",str);

    printf("%c\n",str[0]);
    printf("%c\n",str[1]);
    printf("%c\n",str[2]);
    printf("%c\n",str[3]);
    printf("%c\n",str[4]);

    return 0;
}
