#include<iostream>
#include<unistd.h>
#include<fcntl.h>
using namespace std;

int main()
{
    int fd = 0;
    
    fd = creat("Marvel.txt",0777);
    
    if(fd == -1)
    {
        cout<<"Unable to Create File \n";
    }
    else
    {
        cout<<"File Successfully Created \n";
    }
    
    return 0;
}