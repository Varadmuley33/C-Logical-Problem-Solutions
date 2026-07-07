////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program201.c
//  Description :   Accepts a file name from the user and opens                    
//                  the specified file in read and write mode.
//  Author :        Varad Nitin Muley
//
////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
//  Required Header files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main ()
{
    int fd = 0;
    int iRet = 0;
    char FileName[20];

    printf("Enter the name of file that you want to open : ");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file \n");
    }
    else
    {
        printf("file successfully opened with fd : %d\n", fd);
    }

    return 0;
}

