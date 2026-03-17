#include<iostream>
using namespace std;

void Accept(int Brr[],int iNo)
{
    int iCnt = 0;
    
    cout<<"Please Entered the Values : \n";
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        cin>>Brr[iCnt];
    }
}
void Display(int Brr[], int iNo)
{
    int iCnt = 0;
    
    cout<<"Values from Array Are : \n";
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        cout<<Brr[iCnt]<<"\n";
    }
}

int main()
{
    int iSize = 0;
    
    cout<<"Enter How many Elements : \n";
    cin>>iSize;
    
    int Arr[iSize];
    
    Accept(Arr,iSize);
    Display(Arr,iSize);
    
    return 0;
}