#include<iostream>
using namespace std;

int Count(char *str, char ch)
{
    int iCount = 0;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[30];
    char cvalue = '\0';
    int iRet = 0;
    
    cout<<"Enter String : ";
    cin.getline(Arr,30);
    cout<<"Enter the Character \n";
    cin>>cvalue;
    
    iRet = Count(Arr, cvalue);
    cout<<"Count Of "<<cvalue<<" is : "<<iRet<<"\n";

    return 0;
}