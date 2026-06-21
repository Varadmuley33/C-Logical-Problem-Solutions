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

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Demo.txt
//  Output : 5 bytes gets successfully read
//
//  Explanation :
//  The file is opened successfully and the first
//  5 bytes are read from the file into the Data array.
//  The number of bytes read is returned by read().
//
//  Input : Sample.txt
//  Output : Unable to open
//
//  Explanation :
//  If the specified file does not exist or cannot
//  be accessed, open() returns -1 and the program
//  terminates.
//
/////////////////////////////////////////////////////////////////
