#include<iostream>
#include<unistd.h>
#include<fcntl.h>
using namespace std;

int main()
{
    int fd = 0;
    char Name[30];
    
    cout<<"Please Enter File Name That You want to Open \n";
    cin.getline(Name, sizeof(Name));
    
    fd = open(Name, O_RDWR);
    
    if(fd == -1)
    {
        cout<<"Unable To Open file \n";
        return -1;
    }
    else 
    {
        cout<<"File Successfully Opened \n";
        write(fd, "Hello World", 11);
        close(fd);
    }
    
    return 0;
}