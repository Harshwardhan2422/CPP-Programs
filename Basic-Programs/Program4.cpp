// Addition of two Numbers with Function call
#include<iostream>
using namespace std;

int AdditionInt(int ivalue1,int ivalue2)
{
    int iAdd = 0;
    iAdd = ivalue1 + ivalue2;
    return iAdd;
}

int main()
{
    int iNo1 = 0, iNo2 = 0, iRet = 0;
    
    cout<<"Enter First Number : \n";
    cin>>iNo1;
    
    cout<<"Enter Second Number : \n";
    cin>>iNo2;
    
    iRet = AdditionInt(iNo1, iNo2);
    cout<<"Addition is : "<<iRet<<"\n";
    
    return 0;
}