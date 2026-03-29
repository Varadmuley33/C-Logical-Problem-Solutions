#include<stdio.h>

struct ArithematicInt
{
    int No1;
    int No2;
};

struct ArithematicDouble
{
    double No1;
    double No2;
};

void InitializeInt(struct ArithematicInt *ptr, int A, int B)
{
    ptr->No1 = A;
    ptr->No2 = B;
}

void InitializeDouble(struct ArithematicDouble *ptr, double A, double B)
{
    ptr->No1 = A;
    ptr->No2 = B;
}

int AdditionInt(struct ArithematicInt *ptr)
{
    return ptr->No1 + ptr->No2;
}

int SubstractionInt(struct ArithematicInt *ptr)
{
    return ptr->No1 - ptr->No2;
}

double AdditionDouble(struct ArithematicDouble *ptr)
{
    return ptr->No1 + ptr->No2;
}

double SubstractionDouble(struct ArithematicDouble *ptr)
{
    return ptr->No1 - ptr->No2;
}

int main()
{
    struct ArithematicInt aobj1;
    struct ArithematicDouble aobj2;

    InitializeInt(&aobj1, 11, 10);
    InitializeDouble(&aobj2, 101.5, 50.3);

    printf("%d\n", AdditionInt(&aobj1));
    printf("%d\n", SubstractionInt(&aobj1));

    printf("%lf\n", AdditionDouble(&aobj2));
    printf("%lf\n", SubstractionDouble(&aobj2));

    return 0;
}
