#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int ilength = 0, iCnt = 0;
    
    cout<<"Enter Number Of Element : \n";
    cin>>ilength;
    
    ptr = new int[ilength];
    
    cout<<"Please Entered the Values : \n";
    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        cin>>ptr[iCnt];
    }
    
    delete []ptr;
    
    return 0;
}