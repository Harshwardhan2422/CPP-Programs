#include<iostream>
using namespace std;

void Display()
{
    int Arr[4];
    int iCnt = 0;
    
    cout<<"Please Entered the Values : \n";
    
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    cout<<"Values from Array Are : \n";
    
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
}

int main()
{
    Display();
    
    return 0;
}