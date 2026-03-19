////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program119.c
//  Description :   Print value of array using loop 
//  Author :        Varad Nitin Muley
//  Date :          13/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////




/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include <stdio.h>


void Display(int Arr[])
{
    int iCnt = 0 ;

    for (iCnt = 0 ; iCnt < 4 ; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);                  
    }
}

int main ()
{
    int Brr[] = {10,20,30,40,50,60,70};     //Change

    Display(Brr);
    

    return 0;
}// End of main