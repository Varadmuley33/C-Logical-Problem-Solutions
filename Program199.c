////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program199.c
//  Description :   Accept a file name from the user, create the file,
//                  and display its file descriptor.
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

    printf("Enter the name of file that you want to create : ");
    scanf("%s",FileName);

    fd = creat(FileName,0777);

    if(fd == -1)
    {
        printf("Unable yo create the file\n");
    }
    else
    {
        printf("File successfully created with fd : %d\n",fd);
    }

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : Demo.txt
//  Output : File successfully created with fd : 3
//
//  Input : Data.txt
//  Output : File successfully created with fd : 3
//
/////////////////////////////////////////////////////////////////
