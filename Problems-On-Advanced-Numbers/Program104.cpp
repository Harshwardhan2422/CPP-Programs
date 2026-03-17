#include<iostream>
using namespace std;

class GreaterDisplay
{
    public:
        int *Arr;
        int iSize;
        
        GreaterDisplay(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }
        ~GreaterDisplay()
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
            int iCnt = 0, iFound = 0;
            
            cout<<"Element Greater than 15 is : \n";
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] > 15)
                {
                    cout<<Arr[iCnt]<<"\n";
                    iFound++;
                }
            }
            if(iFound == 0)
            {
                cout<<"No element Greater than 15 : \n";
            }
        }
        
};

int main()
{
    int ilength = 0;
    
    cout<<"Enter Number Of Element : \n";
    cin>>ilength;
    
    if(ilength <= 0)
    {
        cout<<"Invalid Size! Size must be Greater than zero \n";
        return -1;
    }
    
    GreaterDisplay gobj(ilength);
    gobj.Accept();
    gobj.Display();

    return 0;
}