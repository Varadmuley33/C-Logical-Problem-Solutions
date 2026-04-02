////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program166.c
//  Description :   
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//  Input :         iRow = 4, iCol = 4
//  Output :        1 2 3 4
//                  1 2 3 4
//                  1 2 3 4
//                  1 2 3 4
//
////////////////////////////////////////////////////////////////////////////////////////////////

/*
    iRow = 4    iCol = 4 

        1 2 3 4 
        1 2 3 4 
        1 2 3 4 
        1 2 3 4 
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
//  Description   : Prints column-wise numbers pattern
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
            printf("%d\t", j);
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
//  Output : 1 2 3 4
//           1 2 3 4
//           1 2 3 4
//           1 2 3 4
//
//  Input  : 2 3
//  Output : 1 2 3
//           1 2 3
//
//  Input  : 3 2
//  Output : 1 2
//           1 2
//           1 2
//
/////////////////////////////////////////////////////////////////
