////////////////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     Program202.c
//  Description :   Demonstrates opening multiple files and
//                  displays their file descriptor values.
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
    int fd1 = 0, fd2 = 0, fd3 = 0;

    fd1 = open("PPA.txt", O_RDONLY);
    printf("fd1 : %d\n", fd1);         // 3

    fd2 = open("LB.txt", O_RDONLY);
    printf("fd2 : %d\n", fd2);         // 4

    fd3 = open("Demo.txt", O_RDONLY);
    printf("fd3 : %d\n", fd3);         // 5

    return 0;
}

/////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input : N/A
//  Output : fd1 : 3
//           fd2 : 4
//           fd3 : 5
//
//  Explanation :
//  Three files are opened in read-only mode. The operating
//  system allocates a unique file descriptor for each file.
//  Typically, file descriptors start from 3 since 0, 1,
//  and 2 are reserved for standard input, standard output,
//  and standard error respectively.
//
//  Input : N/A
//  Output : fd1 : -1
//
//  Explanation :
//  If a file does not exist or cannot be opened,
//  open() returns -1.
//
/////////////////////////////////////////////////////////////////
