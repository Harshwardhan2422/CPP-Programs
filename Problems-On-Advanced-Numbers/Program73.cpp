#include<iostream>
using namespace std;

void Display(int ptr[],int iSize)
{
     int iCnt = 0;
     
     cout<<"Values from Array Are : \n";
     for(iCnt = 0; iCnt < iSize; iCnt++)
     {
         cout<<ptr[0]<<"\n";
         ptr++;
     }
}

int main()
{
    int Arr[4];
    int iCnt = 0;
    
    cout<<"Entered the Values : \n";
    for(iCnt = 0; iCnt < 4; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    Display(Arr,4);
    
    return 0;
}