#include<iostream>
using namespace std;

int main()
{
    int Arr[] = {11,21,51,101};
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
    return 0;
}