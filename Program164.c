////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program164.c
//  Description :   
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//  Input :         iRow = 3, iCol = 4
//  Output :        * * * *
//                  * * * *
//                  * * * *
//
////////////////////////////////////////////////////////////////////////////////////////////////

/*
    * * * * 
    * * * * 
    * * * * 
*/

/////////////////////////////////////////////////////////////////
// 
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Prints matrix pattern of *
//  Input         : Two Integers
//  Output        : None
//  Author        : Varad Nitin Muley
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////////////
void Display(int iRow,int iCol)
{
    int i = 0 , j = 0 ;

    for(i = 1 ; i <= iRow ; i++)
    {
        for (j = 1 ; j <= iCol ; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function
//
/////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0 ,iValue2 = 0;
        
    printf("Enter the number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Test Cases
//
//  Input  : 3 4
//  Output : * * * *
//           * * * *
//           * * * *
//
//  Input  : 2 3
//  Output : * * *
//           * * *
//
//  Input  : 4 2
//  Output : * *
//           * *
//           * *
//           * *
//
/////////////////////////////////////////////////////////////////
