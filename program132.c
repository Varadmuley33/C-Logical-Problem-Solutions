////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program132.c
//  Description :   Count even numbers 
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
#include <stdlib.h>


float Average(int Arr[],int iSize)
{
    int iCnt = 0 , iSum = 0 ;

    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        iSum = iSum + Arr[iCnt];              
    }
    
    return ((float)iSum/(float)iSize);    
}

int main ()
{
    int iLength = 0 , iCnt = 0 ;
    float fRet = 0;
    int *ptr = NULL;


    printf("Enter number of elements : ");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if(NULL == ptr)      //Industrial way of coding 
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elements : \n");
    
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    fRet = Average (ptr,iLength);
    printf("Average of elements is  : %f \n" , fRet);

    free(ptr);

    return 0;
}// End of main