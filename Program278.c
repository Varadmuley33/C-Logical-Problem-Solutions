// POP Approach (Converted from OOP Specific)

#include<stdio.h>

struct Arithematic
{
    int No1;
    int No2;
};

// Constructor replacement
void Initialize(struct Arithematic *ptr, int A, int B)
{
    ptr->No1 = A;
    ptr->No2 = B;
}

// Addition
int Addition(struct Arithematic *ptr)
{
    int Ans = 0;
    Ans = ptr->No1 + ptr->No2;
    return Ans;
}

// Substraction
int Substraction(struct Arithematic *ptr)
{
    int Ans = 0;
    Ans = ptr->No1 - ptr->No2;
    return Ans;
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
