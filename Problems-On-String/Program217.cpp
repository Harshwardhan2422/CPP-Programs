#include<iostream>
using namespace std;

bool Display(char *str, char ch)
{
    bool bFlag = false;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[30];
    char cvalue = '\0';
    bool bRet = false;
    
    cout<<"Enter String : ";
    cin.getline(Arr,30);
    cout<<"Enter the Character : ";
    cin>>cvalue;
    
    bRet = Display(Arr, cvalue);
    
    if(bRet == true)
    {
        cout<<"Character is present \n";
    }
    else
    {
        cout<<"Character is Not present \n";
    }
    return 0;
}