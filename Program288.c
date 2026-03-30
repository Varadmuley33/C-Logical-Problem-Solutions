#include<stdio.h>

void auto_demo()
{
    auto int i = 1;
    printf("auto_demo : %d\n", i);
    i++;
}

int main()
{
    auto_demo();
    auto_demo();
    auto_demo();
    auto_demo();
    
    return 0;
}
