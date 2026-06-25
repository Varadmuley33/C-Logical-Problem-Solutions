////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program71.c
//  Description :   Accept a number from the user and return the sum of
//                  its digits.
//  Author :        Varad Nitin Muley
//
////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : SumDigits
//  Description   : Calculates and returns the sum of digits of the given
//                  number.
//  Input         : Integer
//  Output        : Integer
//
/////////////////////////////////////////////////////////////////

int SumDigits(int iNo)
{
     int iDigit = 0 ;
     int iSum = 0 ;

     if(iNo < 0)
     {
          iNo = -iNo;
     }

     if(0 == -1)
     {
          return 1;
     }

     while(iNo != 0)
     {
          iDigit = iNo % 10;
          iNo = iNo / 10;

          iSum = iSum + iDigit ;
     }

     return iSum;
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main ()
{
     int iValue = 0;
     int iRet = 0 ;

     printf("Enter the number : \n");
     scanf("%d",&iValue);

     iRet = SumDigits(iValue);
     printf("Sum of digits : %d\n",iRet);

     return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : 1234
//  Output :
//  Sum of digits : 10
//
//  Input : -567
//  Output :
//  Sum of digits : 18
//
/////////////////////////////////////////////////////////////////
