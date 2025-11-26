#include<stdio.h>
int Add (int A , int B)
{
    int sum = 0 ;
    sum = A + B;     // Business logic 
    return sum;
}

int main ()
{ 
    int i = 0, j = 0 ;
    int ans = 0;
   
    printf("Enter first number : ");
    scanf("%d",&i);

    printf("Enter Second number : ");
    scanf("%d",&j);

    ans = Add(i,j);

    printf("Addition is : %d\n" ,ans);
    
    return 0;
}