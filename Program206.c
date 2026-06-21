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

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Demo.txt
//  File Content : India is my country
//  Output : 7 bytes gets successfully read
//           Data from file : India i
//
//  Explanation :
//  The first 7 bytes are read from the file and
//  stored in the Data array. The data read from
//  the file is then displayed on the screen.
//
//  Input : Sample.txt
//  Output : Unable to open
//
//  Explanation :
//  If the specified file cannot be opened,
//  open() returns -1 and the program terminates.
//
/////////////////////////////////////////////////////////////////
