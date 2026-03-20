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
    
    iRet = read(fd, Arr, 8);
    
    if(iRet == -1)
    {
        cout<<"Unable To Read File \n";
        return -1;
    }
    
    Arr[iRet] = '\0';
    
    cout<<"Data From File is : "<<Arr<<"\n";
    close(fd);
    
    return 0;
}