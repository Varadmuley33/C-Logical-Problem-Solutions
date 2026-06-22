////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program206.c
//  Description :   Accepts a file name from the user, reads
//                  seven bytes from the file and displays them.
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
    int fd = 0, iRet = 0;
    char FileName[20];
    char Data[50];

    printf("Enter the name of file : ");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open ");
        return -1;
    }

    iRet = read(fd, Data, 7);
    printf("%d bytes gets successfully read\n", iRet);

    printf("Data from file : %s\n", Data);

    close(fd);

    return 0;
}
