#include<stdio.h>

struct Arithematic
{
    int No1;
    int No2;
};

void Initialize(struct Arithematic *ptr, int A, int B)
{
    ptr->No1 = A;
    ptr->No2 = B;
}

int Addition(struct Arithematic *ptr)
{
    return ptr->No1 + ptr->No2;
}

int Substraction(struct Arithematic *ptr)
{
    return ptr->No1 - ptr->No2;
}

int main()
{
    struct Arithematic aobj1, aobj2;

    Initialize(&aobj1, 11, 10);
    Initialize(&aobj2, 101, 50);

    printf("%d\n", Addition(&aobj1));
    printf("%d\n", Substraction(&aobj1));

    printf("%d\n", Addition(&aobj2));
    printf("%d\n", Substraction(&aobj2));

    return 0;
}
