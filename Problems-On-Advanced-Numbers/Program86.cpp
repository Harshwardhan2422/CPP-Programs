#include<iostream>
using namespace std;

class OddDisplay
{
    public:
        int *Arr;
        int iSize;
        
        OddDisplay(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }
        ~OddDisplay()
        {
            delete []Arr;
        }
        
        void Accept()
        {
            int iCnt = 0;
            
            cout<<"Please Enter the Values : \n";
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        
        void Display()
        {
            int iCnt = 0, iFlag = 0;
            
            cout<<"Odd Elements of Array Are : ";
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] % 2 != 0)
                {
                    cout<<Arr[iCnt]<<" ";
                    iFlag = 1;
                }
            }
            if(iFlag == 0)
            cout<<"None";
        }
};

int main()
{
    int ilength = 0;
    
    cout<<"Enter Number : \n";
    cin>>ilength;
    
    if(ilength <= 0)
    {
        cout<<"Invalid Size! Size must be Greater than zero \n";
        return -1;
    }
    
    OddDisplay obj(ilength);
    obj.Accept();
    obj.Display();
    
    return 0;
}