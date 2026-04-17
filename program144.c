////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program144.c
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

typedef int * IPTR;


int Maximum (int Arr[] , int iSize)
{
    int iMax = 0 ; //Unable to handle negative values
    int iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main ()
{
    int iLength = 0 ,iCnt = 0 , iRet = 0 ;

    IPTR iPtr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    //Step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the values : \n");
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Maximum(iPtr,iLength);
    printf("Maximum number is : %d\n",iRet);

    // Step 3 : Free the memory 
    free(iPtr);
    
    return 0 ;

}