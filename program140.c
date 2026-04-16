////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program140.c
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
#include<stdbool.h>


typedef int * IPTR;


//O(N)
bool LinearSearch(int Arr[],int iSize, int iNo)
{
    int  iCnt = 0 ;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;                   //Not good programming practice 
        }
    }
    return false;
  
}

int main ()
{
    int iLength = 0 ,iCnt = 0  ,iValue = 0  ;
    bool bRet = false;

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

    printf("Enter the number you want to search : ");
    scanf("%d",&iValue);

    bRet = LinearSearch(iPtr,iLength,iValue);

    if(bRet == true)
    {
        printf("%d is present in given elements \n",iValue);
    }
    else
    {
        printf("%d is not present in given elements \n",iValue);

    }

    // Step 3 : Free the memory 
    free(iPtr);
    
    return 0 ;

}