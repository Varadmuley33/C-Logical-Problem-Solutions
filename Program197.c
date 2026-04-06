#include<stdio.h>
#include<fcntl.h>

int main ()
{
    int fd = 0 ;
    int iRet = 0 ;

    fd = creat("PPA.txt",0777);

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
