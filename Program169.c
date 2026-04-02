////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program169.c
//  Description :   
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//  Input :         iRow = 4, iCol = 4
//  Output :        * * * *
//                  2 2 2 2
//                  * * * *
//                  4 4 4 4
//
////////////////////////////////////////////////////////////////////////////////////////////////

/*
    iRow = 4    iCol = 4 

        * * * * 
        2 2 2 2
        * * * *
        4 4 4 4
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
//  Description   : Prints alternating rows of * and row number
//  Input         : Two Integers
//  Output        : None
//  Author        : Varad Nitin Muley
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////////////
void Display(int iRow,int iCol)
{
    int i = 0 ,j = 0;
 
    for (i = 1 ; i <= iRow ; i++)
    {
        for (j = 1 ; j <= iCol ; j++)
        {
            if((i % 2 ) == 0)
            {
                printf("%d\t", i);
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
//  Test Cases
//
//  Input  : 4 4
//  Output : * * * *
//           2 2 2 2
//           * * * *
//           4 4 4 4
//
//  Input  : 3 3
//  Output : * * *
//           2 2 2
//           * * *
//
//  Input  : 2 5
//  Output : * * * * *
//           2 2 2 2 2
//
/////////////////////////////////////////////////////////////////
