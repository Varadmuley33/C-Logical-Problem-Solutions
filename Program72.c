#include<stdio.h>

int main()
{
    int iNo = 12;
    int i = 0;

    for(i = 1; i <= (iNo/2); i++)
    {
        if((iNo % i) == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
