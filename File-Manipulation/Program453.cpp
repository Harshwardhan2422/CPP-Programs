#include<iostream>
#include<unistd.h>
#include<fcntl.h>
#define FILESIZE 1024
using namespace std;

int main()
{
    int fd = 0, iRet = 0;
    char Name[50];
    char Arr[FILESIZE];
    
    cout<<"Enter File Name That You want To Open \n";
    cin.getline(Name, sizeof(Name));
    
    fd = open(Name, O_RDONLY);
    
    if(fd == -1)
    {
        cout<<"Unable To open File \n";
        return -1;
    }
    
    cout<<"Data From File is : \n";
    
    while((iRet = read(fd, Arr, FILESIZE)) != 0)
    {
        write(1, Arr, iRet);
    }
    
    close(fd);
    
    return 0;
}