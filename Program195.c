////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program195.c
//  Description :   
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//  Input :         6
//  Output :        
//       
////////////////////////////////////////////////////////////////////////////////////////////////

/*
    iRow = 4    iCol = 4

       *
       * * 
       * * *
       * * * * 
*/

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0 ,j = 0;
 
    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        printf("Row number and column number should be same\n");
        return;
    }

    for (i = 1 ; i <= iRow ; i++)
    {
        for (j = 1 ; i >= j ; j++)
        {
            printf("*\t");    
        }
        printf("\n");
    }
   
    printf("\n"); 
}

int main()
{
    int iValue1 = 0 ,iValue2 = 0 ;

    printf("Enter the number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}
