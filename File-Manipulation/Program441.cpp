#include<iostream>
#include<unistd.h>
#include<fcntl.h>
using namespace std;

int main()
{
    int fd = 0;
    char Name[50];
    
    cout<<"Enter File Name That You want To Delete \n";
    cin.getline(Name, sizeof(Name));
    
    fd = unlink(Name);
    
    if(fd == -1)
    {
        cout<<"Unable To Delete File \n";
    }
    else
    {
        cout<<"File Delete Successfully \n";
    }
    
    return 0;
}