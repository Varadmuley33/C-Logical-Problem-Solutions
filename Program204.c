////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program204.c                                            
//  Description :   Accepts a file name from the user and reads
//                  data from the specified file.
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

    iRet = read(fd, Data, 5);
    printf("%d bytes gets successfully read\n", iRet);

    close(fd);

    return 0;
}
