////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program180.c
//  Description :   
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//  Input :         iRow = 4, iCol = 4
//  Output :        a b c d
//                  a b c d
//                  a b c d
//                  a b c d
//
////////////////////////////////////////////////////////////////////////////////////////////////

/*
    iRow = 4    iCol = 4 

       a b c d 
       a b c d 
       a b c d 
       a b c d 
        
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
//  Description   : Prints repeating lowercase alphabets row-wise
//  Input         : Two Integers
//  Output        : None
//  Author        : Varad Nitin Muley
//  Date          : 18/11/2025
//
/////////////////////////////////////////////////////////////////
void Display(int iRow,int iCol)
{
    int i = 0 ,j = 0;
    char ch = 'a';
 
    for (i = 1 ; i <= iRow ; i++)
    {
        ch = 'a';
        for (j = 1 ; j <= iCol ; j++)
        {
            printf("%c\t", ch);
            ch++;
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
//  Output : a b c d
//           a b c d
//           a b c d
//           a b c d
//
//  Input  : 2 3
//  Output : a b c
//           a b c
//
//  Input  : 3 2
//  Output : a b
//           a b
//           a b
//
/////////////////////////////////////////////////////////////////
