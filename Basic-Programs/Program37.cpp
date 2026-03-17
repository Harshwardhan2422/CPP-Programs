#include<iostream>
using namespace std;

void DisplayResult(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    
    while(iCnt <= iNo)
    {
        cout<<"\nNever Give Up\n";
        iCnt++;
    }
}

int main()
{
    int iFrequency = 0, iCnt = 0;
    iCnt = 1;
    
    cout<<"Enter The Frequency : \n";
    cin>>iFrequency;
    
    DisplayResult(iFrequency);
    
    return 0;
}