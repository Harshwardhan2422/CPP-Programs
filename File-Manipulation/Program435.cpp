#include<iostream>
#include<unistd.h>
#include<fcntl.h>
using namespace std;

int main()
{
    int fd = 0;
    char Name[30];
    
    cout<<"Please Enter the File Name That You want to Open \n";
    cin.getline(Name,30);
    
    fd = open(Name, O_RDWR);
    
    if(fd == -1)
    {
        cout<<"Unable To Open file \n";
    }
    else
    {
        cout<<"File Successfully Opened with fd : "<<fd<<"\n";
        close(fd);
    }
    
    return 0;
}