#include<stdio.h>

struct Number
{
    int i;
};

void DisplayFactors(struct Number *this, int iNo)
{
    for(this->i = 1; this->i <= (iNo/2); this->i++)
    {
        if((iNo % this->i) == 0)
        {
            printf("%d\n", this->i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    struct Number nobj;

    DisplayFactors(&nobj, iValue);

    return 0;
}
