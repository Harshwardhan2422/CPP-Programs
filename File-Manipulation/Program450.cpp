#include<iostream>
#include<unistd.h>
#include<fcntl.h>
using namespace std;

int main()
{
    int fd = 0, iRet = 0;
    char Name[50];
    char Arr[50];
    
    cout<<"Enter File Name That You want To Open \n";
    cin.getline(Name, sizeof(Name));
    
    fd = open(Name, O_RDONLY);
    
    if(fd == -1)
    {
        cout<<"Unable To Delete File \n";
        return -1;
    }
    
    lseek(fd, 0, SEEK_SET);
    
    iRet = read(fd ,Arr, 10);
    Arr[iRet] = '\0';
    cout<<"Number Of Bytes read : "<<iRet<<"\n";
    
    iRet = read(fd ,Arr, 10);
    Arr[iRet] = '\0';
    cout<<"Number Of Bytes read : "<<iRet<<"\n";
    
    iRet = read(fd ,Arr, 6);
    Arr[iRet] = '\0';
    cout<<"Number Of Bytes read : "<<iRet<<"\n";
    
    iRet = read(fd ,Arr, 10);
    Arr[iRet] = '\0';
    cout<<"Number Of Bytes read : "<<iRet<<"\n";
    
    close(fd);
    
    return 0;
}