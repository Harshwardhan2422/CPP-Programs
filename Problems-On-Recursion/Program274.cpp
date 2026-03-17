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
        
        void DispalyR()
        {
            if(iNo >= 1)
            {
                cout<<iNo<<"\n";
                iNo--;
                DispalyR();
            }
            cout<<"End Of DispalyR \n";
        }
        
};

int main()
{
    int iValue = 0;
    
    cout<<"Enter The Frequency : ";
    cin>>iValue;
    
    Recursion obj(iValue);
    obj.DispalyR();
    
    cout<<"End Of Main \n";

    return 0;
}