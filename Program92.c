#include<stdio.h>

int main()
{
    int Arr[] = {10,20,30,40};
    int size = sizeof(Arr)/sizeof(Arr[0]);

    printf("Number of elements : %d\n",size);
    printf("%d\n",Arr[0]);
    printf("%d\n",Arr[1]);
    printf("%d\n",Arr[2]);
    printf("%d\n",Arr[3]);

    return 0;
}
