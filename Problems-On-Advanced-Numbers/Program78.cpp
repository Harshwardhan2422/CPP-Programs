#include<iostream>
using namespace std;

void DisplayResult(int Arr[],int iSize)
{
    int iCnt = 0;
    
    cout<<"Values from Array Are : \n";
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }   
}

int main()
{
    int *ptr = NULL;
    int ilength = 0, iCnt = 0;
    
    cout<<"Enter Number of Element : \n";
    cin>>ilength;
    
    ptr = new int[ilength];
    
    cout<<"Please Entered the Values : \n";
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        cin>>ptr[iCnt];
    }
    
    DisplayResult(ptr, ilength);
    
    delete []ptr;
    
    return 0;
}