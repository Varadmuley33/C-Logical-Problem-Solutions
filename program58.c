#include<stdio.h>
#include<stdbool.h>


int checkPrime(int iNo)
{
   int iCnt = 0;
   bool bFlag = false;                   // change ithe kelay 
  
   if(iNo < 0)
   {
     iNo = -iNo;
   }
   
   bFlag = true;
   for(iCnt = 2 ; iCnt <= (iNo/2) ; iCnt++)
   {
     if((iNo % iCnt ) == 0)
     {
          bFlag = false;
          break;                        // Optimization
     }
   }
   return bFlag;
}
int main ()
{
     int iValue = 0;
     bool bRet = 0 ;

     printf("Enter the number : \n");
     scanf("%d",&iValue);

     bRet = checkPrime(iValue);

    if(bRet == true )
      {
        printf("%d is a prime number \n",iValue);
      } 
    else
      {
        printf("%d is a not prime number",iValue);
      }

    return 0;

}

/*
    Time Complexity for Prime : N/2
    Time Complexity for Non Prime : either 1 or 2 
*/