#include<iostream>
using namespace std;

void Additioni(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    cout<<"Addition is : "<<iAns<<"\n";
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    cout<<"Enter First Number : \n";
    cin>>iValue1;
    cout<<"Enter Second Number : \n";
    cin>>iValue2;
    
    Additioni(iValue1, iValue2);

    return 0;
}