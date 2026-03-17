#include<iostream>
using namespace std;

class LessDisplay
{
    public:
        int *Arr;
        int iSize;
        
        LessDisplay(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }
        ~LessDisplay()
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
        
        void Display(int iNum)
        {
            int iCnt = 0, iFound = 0;
            
            cout<<"Element Less than "<<iNum<< " is : \n";
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] < iNum)
                {
                    cout<<Arr[iCnt]<<"\n";
                    iFound++;
                }
            }
            if(iFound == 0)
            {
                cout<<"No Element Less than "<<iNum<<"\n";
            }
        }
};

int main()
{
    int ilength = 0, iValue = 0;
    
    cout<<"Enter Number Of Element : \n";
    cin>>ilength;
    
    if(ilength <= 0)
    {
        cout<<"Invalid Size! Size must be Greater than zero \n";
        return -1;
    }
    
    LessDisplay lobj(ilength);
    lobj.Accept();
    
    cout<<"Enter Number For Compare : \n";
    cin>>iValue;
    
    lobj.Display(iValue);

    return 0;
}