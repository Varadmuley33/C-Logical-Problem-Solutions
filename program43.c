//Input : 12     2                 Output : True
//Input : 12     3                 Output : True
//Input : 12     5                 Output : false
//Input : 12     12                Output : false

#include<stdio.h>

int main()
{

    int iValue1 = 0 , iValue2 = 0;

    printf ("Enter first Number : ");
    scanf("%d",&iValue1);

    printf ("Enter Second Number : ");
    scanf("%d",&iValue2);

    if((iValue1 % iValue2) == 0)
    {
        printf("It is completely divisible");
    }
    else
    {
        printf("It is not completely divisible");
    }
    return 0;

}