#include<iostream>
#include<unistd.h>
#include<fcntl.h>
using namespace std;

int main()
{
    int fd = 0, iRet = 0;
    char Name[30];
    char Arr[50];
    
    cout<<"Please Enter File Name That You want to Open \n";
    cin.getline(Name, sizeof(Name));
    
    fd = open(Name, O_RDWR);
    
    if(fd == -1)
    {
        cout<<"Unable To Open file \n";
        return -1;
    }
    
    cout<<"File Successfully Opened \n";
    
    iRet = read(fd, Arr , 5);
    
    if(iRet == -1)
    {
        cout<<"Unable To Read Data into file \n";
    }
    else
    {
        Arr[iRet] = '\0';
        cout<<"Bytes Gets Successfully Return into file : "<<iRet<<"\n";
        cout<<"Data From File is : "<<Arr<<"\n";
    }
    close(fd);
    
    return 0;
}