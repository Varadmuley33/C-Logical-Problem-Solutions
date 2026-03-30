#include<stdio.h>

void auto_demo()
{
    auto int i = 1;
    printf("auto_demo : %d\n", i);
    i++;
}

void static_demo()
{
    static int i = 1;
    printf("static_demo : %d\n", i);
    i++;
}

int main()
{
    auto_demo();
    auto_demo();
    auto_demo();
    auto_demo();

    static_demo();
    static_demo();
    static_demo();
    static_demo();
    
    return 0;
}
