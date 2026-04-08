#include<stdio.h>

int main()
{
    int iNo = 0;
    int i = 0;

    printf("Enter number : ");

    scanf("%d", &iNo);

    for(i = 1; i <= (iNo/2); i++)
    {
        if((iNo % i) == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
