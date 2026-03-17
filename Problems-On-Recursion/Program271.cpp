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
            static int iCnt = 1;
            
            if(iCnt <= iNo)
            {
                cout<<iCnt<<"\n";
                iCnt++;
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
    
    cout<<"End Of Main \n";

    return 0;
}