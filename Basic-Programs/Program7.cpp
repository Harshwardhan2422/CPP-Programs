#include<iostream>
using namespace std;

int main()
{
    int iNo1 = 10, iNo2 = 5, iAns = 0;
    float fNo1 = 11.10f, fNo2 = 5.2f, fAns = 0.0f;
    
    iAns = iNo1 + iNo2;
    fAns = fNo1 + fNo2;
    
    cout<<" "<<iNo1<<"\t\t"<<" "<<fNo1<<"\n";
    cout<<"+"<<iNo2<<"\t\t"<<"+"<<fNo2<<"\n";
    cout<<"-------\t\t--------\n";
    cout<<" "<<iAns<<"\t\t"<<" "<<fAns<<"\n";
     
    return 0;
}