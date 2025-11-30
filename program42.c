// Input - 10
// Output - 2 4 6 8 10

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1 ; iCnt <= iNo ; iCnt++)  // Change is here short hand vaparla he tevhach vapraycha jevha = chya pudha maga same asel tevha refer code 40 for reference 
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
//Time Complexity : O(N)


int main()
{
    int iValue = 0 ;
    printf("Enter the Frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}