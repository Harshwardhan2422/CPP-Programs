#include<iostream>
using namespace std;

void Display(int *ptr)
{
    cout<<"Values from Array Are : \n";
    
    cout<<ptr[0]<<"\n";
    cout<<ptr[1]<<"\n";
    cout<<ptr[2]<<"\n";
    cout<<ptr[3]<<"\n";
}

int main()
{
    int Arr[4];
    int iCnt = 0;
    
    cout<<"Enter the Values : \n";
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    Display(Arr);
    
    return 0;
}