////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program203.c
//  Description :   Accepts a file name from the user and writes
//                  data into the specified file.
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
    char Data[] = "India is my country";

    printf("Enter the name of file : ");
    scanf("%s", FileName);

    fd = open(FileName, O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open ");
        return -1;
    }

    iRet = write(fd, Data, 11);
    printf("%d bytes gets successfully return\n", iRet);

    close(fd);

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Demo.txt
//  Output : 11 bytes gets successfully return
//
//  Explanation :
//  The file is opened successfully and the first
//  11 bytes from the string "India is my country"
//  are written into the file.
//
//  Input : Sample.txt
//  Output : Unable to open
//
//  Explanation :
//  If the specified file cannot be opened,
//  open() returns -1 and the program terminates.
//
/////////////////////////////////////////////////////////////////
