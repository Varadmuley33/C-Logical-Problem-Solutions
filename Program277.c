// POP Approach (Converted from OOP)

#include<stdio.h>

struct Arithematic
{
    int No1;
    int No2;
};

// Function to initialize values (Constructor replacement)
void Initialize(struct Arithematic *ptr, int A, int B)
{
    ptr->No1 = A;
    ptr->No2 = B;
}

// Addition function
int Addition(struct Arithematic *ptr)
{
    int Ans = 0;
    Ans = ptr->No1 + ptr->No2;
    return Ans;
}

// Substraction function
int Substraction(struct Arithematic *ptr)
{
    int Ans = 0;
    Ans = ptr->No1 - ptr->No2;
    return Ans;
}

int main()
{
    struct Arithematic aobj;

    Initialize(&aobj, 11, 10);

    printf("%d\n", Addition(&aobj));
    printf("%d\n", Substraction(&aobj));

    return 0;
}
