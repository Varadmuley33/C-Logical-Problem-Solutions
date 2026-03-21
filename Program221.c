#include<stdio.h>

// a e i o u 
int CountVowels(char str[])
{
    int iCount = 0 ;

    while(*str != '\0')
    {
        if((*str == 'e') || (*str == 'a') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
          iCount++;
        }
        str++;
    }

    return iCount;

}

int main ()
{

    char Arr[50] = {'\0'};
    int iRet = 0 ;

    printf("Enter string : \n");
    scanf("%[^'\n]s",Arr);

    iRet = CountVowels(Arr);

    printf("Count of vowels is  : %d\n",iRet);

    return 0;
}
