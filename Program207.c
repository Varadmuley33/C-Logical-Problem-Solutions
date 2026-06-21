////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program207.c
//  Description :   Accepts a file name from the user, reads
//                  seven bytes from the file and displays them.
//                  The data buffer is initialized with null
//                  characters to ensure proper string handling.
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
    char Data[50] = {'\0'};

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
//  stored in the Data array. Since the array is
//  initialized with '\0', the data is displayed
//  correctly as a string.
//
//  Input : Empty.txt
//  Output : 0 bytes gets successfully read
//           Data from file :
//
//  Explanation :
//  If the file is empty, read() returns 0,
//  indicating that no data was available to read.
//
/////////////////////////////////////////////////////////////////
