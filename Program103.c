////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program25.c
//  Description :   Design the class using OOP design
//  Author :        Varad Nitin Muley
//  Date :          18/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : main
//  Description   : Entry point of application
//  Input         : NA
//  Output        : NA
//  Author        : Varad Nitin Muley
//  Date          : 18/11/2025
//
////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *Arr1 = NULL;
    int *Arr2 = NULL;
    int *Arr3 = NULL;

    int iSize1 = 5;
    int iSize2 = 7;
    int iSize3 = 3;

    Arr1 = (int *)malloc(iSize1 * sizeof(int));
    Arr2 = (int *)malloc(iSize2 * sizeof(int));
    Arr3 = (int *)malloc(iSize3 * sizeof(int));

    return 0;
}
