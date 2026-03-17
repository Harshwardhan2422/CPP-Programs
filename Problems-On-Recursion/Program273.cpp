#include<iostream>
using namespace std;

class Recursion 
{
    public:
        int iNo;
        
        Recursion(int iNum)
        {
            iNo = iNum;
        }
        
        void DisplayR()
        {
            if(iNo >= 1)
            {
                cout<<iNo<<"\n";
                iNo--;
                DisplayR();
            }
        }
};

int main()
{
    int iValue = 0;
    
    cout<<"Enter The Frequency : ";
    cin>>iValue;
    
    Recursion obj(iValue);
    obj.DisplayR();

    return 0;
}