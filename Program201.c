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

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Demo.txt
//  Output : file successfully opened with fd : 3
//
//  Explanation :
//  The file Demo.txt exists and is opened successfully
//  in read and write mode. The file descriptor returned
//  by open() is displayed.
//
//  Input : Sample.txt
//  Output : Unable to open file
//
//  Explanation :
//  The specified file does not exist or cannot be
//  accessed, therefore open() returns -1.
//
/////////////////////////////////////////////////////////////////#include<stdio.h>
#include<fcntl.h>

int main ()
{
    int fd = 0 ;
    int iRet = 0 ;
    char FileName[20];

    printf("Enter the name of file that you want to open : ");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file \n");
    }
    else
    {
        printf("file successfully opened with fd : %d\n" ,fd);
    }

    
    return 0;
}
