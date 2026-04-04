////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program186.c
//  Description :   
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//  Input :         6
//  Output :        
//       
////////////////////////////////////////////////////////////////////////////////////////////////

/*
    iRow = 4    iCol = 4

       $ * * * 
       * $ * *
       * * $ *
       * * * $
       
       Diagonal pattern 
*/

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Description   : Displays diagonal pattern
//  Input         : Integer, Integer
//  Output        : void
//  Author        : Varad Nitin Muley
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////////////

void Display(int iRow,int iCol)
{
    int i = 0 ,j = 0;
    int iFirst = 0, iLast = 0;

    for (i = 1 ; i <= iRow ; i++)
    {
        for (j = 1 ; j <= iCol ; j++)
        {
            if((i == j))
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }

    printf("\n"); 
}

/////////////////////////////////////////////////////////////////
//
//  Entry point function
//
/////////////////////////////////////////////////////////////////

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

/////////////////////////////////////////////////////////////////
//
//  Testcases :
//
//  Input  : 4 4
//  Output : 
//           $ * * *
//           * $ * *
//           * * $ *
//           * * * $
//
//  Input  : 3 3
//  Output : 
//           $ * *
//           * $ *
//           * * $
//
//  Input  : 5 5
//  Output : 
//           $ * * * *
//           * $ * * *
//           * * $ * *
//           * * * $ *
//           * * * * $
//
/////////////////////////////////////////////////////////////////
