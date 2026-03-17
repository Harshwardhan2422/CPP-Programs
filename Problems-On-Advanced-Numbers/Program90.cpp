#include<iostream>
using namespace std;

class AdditionEvenOdd 
{
    public:
        int *Arr;
        int iSize;
        
        AdditionEvenOdd(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }
        ~AdditionEvenOdd()
        {
            delete []Arr;
        }
        
        void Accept()
        {
            int iCnt = 0;
            
            cout<<"Please Entered the Values : \n";
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        
        void Display()
        {
            int iCnt = 0, iSumEven = 0, iSumOdd = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 == 0)
                {
                    iSumEven = iSumEven + Arr[iCnt];
                }
                else
                {
                    iSumOdd = iSumOdd + Arr[iCnt];
                }
            }
            cout<<"Addition of Even Elements Are : "<<iSumEven<<"\n";
            cout<<"Addition of Odd Elements Are : "<<iSumOdd<<"\n";
        }
};

int main()
{
    int ilength = 0;
    
    cout<<"Enter Number Of Element : \n";
    cin>>ilength;
    
    if(ilength <= 0)        // Filter 
    {
        cout<<"Invalid Size! Size must be Greater than zero \n";
        return -1;
    }
    
    AdditionEvenOdd aobj(ilength);
    aobj.Accept();
    aobj.Display();

    return 0;
}