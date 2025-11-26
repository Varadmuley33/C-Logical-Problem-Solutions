/*
    START
        Accept number and store as no
        Divide no by 2 
        If the remainder is 0
            then display as Even
        otherwise 
            display as Odd
    STOP

*/

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0 ;

    iRem = iNo % 2 ;

    if(iRem == 0)
    {
        printf("Number is even \n");
    }
    else 
    {
        printf("Number is odd");
    }

}
int main ()
{
    int iValue = 0;
    printf("Enter your number : ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);
    
    return 0;
}