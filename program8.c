/*
    Step 1 : Understand the problem statement 
    Step 2 : Write thr algorithm 
    Step 3 : Decide the progrmming language 
    Step 4 : write the program 
    Step 5 : Test the program

*/

/*
    Algorithm 

    START  
        Accept First number as No1 
        Accept Second number as No2 
        Perform addition on No1 and No1 
        Display addition on screen     
    STOP 
*/
#include<stdio.h>
float AdditionTwoNumbers(float fNo1 , float fNo2)
{
    float fSum = 0.0f ;
    fSum = fNo1 + fNo2;     // Business logic 
    return fSum;
}

int main ()
{ 
    float fValue1 = 0.0f, fValue2 = 0.0f ;
    float fRet = 0.0f;
   
    printf("Enter first number : ");
    scanf("%f",&fValue1);

    printf("Enter Second number : ");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Addition is : %f\n" ,fRet);
    
    return 0;
}