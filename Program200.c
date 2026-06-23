////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program200.c
//  Description :   Accept a file name from the user and open the file
//                  in read and write mode.
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

    close(fd);
    
    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Demo.txt
//  Output : file successfully opened with fd : 3
//
//  Input : ABC.txt
//  Output : Unable to open file
//
/////////////////////////////////////////////////////////////////
