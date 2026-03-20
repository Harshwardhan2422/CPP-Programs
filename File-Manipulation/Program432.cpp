#include<iostream>
#include<unistd.h>
#include<fcntl.h>
using namespace std;

int main()
{
    int fd = 0;
    char Name[30];
    
    cout<<"Please Enter the File Name Taht You want to Open \n";
    cin>>Name;
    
    fd = creat(Name, 0777);
    
    if(fd == -1)
    {
        cout<<"Unable To Create file \n";
    }
    else
    {
        cout<<"File Creat Successfully \n";
    }
    
    return 0;
}