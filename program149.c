////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program147.c
//  Description :   
//  Author :        Varad Nitin Muley
//  Date :          14/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////




/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void Swap (int *p , int *q)
{
    int Temp = 0;

    Temp = *p;
    *p = *q;
    *q = Temp;


}

int main ()
{
    
    int iValue1 = 11;
    int iValue2 = 21;

    printf("Before swap %d %d\n",iValue1,iValue2);

    Swap(&iValue1,&iValue2);

    printf("After swap %d %d\n",iValue1,iValue2);


    return 0 ;

}