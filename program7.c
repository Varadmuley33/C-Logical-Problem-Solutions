#include<stdio.h>
int AdditionTwoNumbers(int iNo1 , int iNo2)
{
    int sum = 0 ;
    sum = iNo1 + iNo2;     // Business logic 
    return sum;
}

int main ()
{ 
    int iValue1 = 0, iValue2 = 0 ;
    int iRet = 0;
   
    printf("Enter first number : ");
    scanf("%d",&iValue1);

    printf("Enter Second number : ");
    scanf("%d",&iValue2);

    iRet = AdditionTwoNumbers(iValue1,iValue2);

    printf("Addition is : %d\n" ,iRet);
    
    return 0;
}