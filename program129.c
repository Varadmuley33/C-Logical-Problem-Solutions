////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program129.c
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


int CountEven(int Arr[],int iSize)
{
    int iCnt = 0 ,iCount = 0 ;

    for (iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount++;
        }                
    }
    
    return iCount;
}

int main ()
{
    int iLength = 0 , iCnt = 0 ,iRet = 0;
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

    iRet = CountEven (ptr,iLength);
    printf("Even numbers are  : %d \n" , iRet);

    free(ptr);

    return 0;
}// End of main