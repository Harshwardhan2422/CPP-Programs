#include<iostream>
using namespace std;

class DisplayLess 
{
    public:
        int iSize;
        int *Arr;
        
        DisplayLess(int iNum)
        {
            iSize = iNum;
            Arr = new int[iSize];
        }
        ~DisplayLess()
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
        
        void Display(int iNo)
        {
            int iCnt = 0;
            
            cout<<"Element Less Than "<<iNo<<" is : \n";
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] < iNo)
                {
                    cout<<Arr[iCnt]<<"\n";
                }
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
        cout<<"Size Must Be Greater Than Zero! \n";
        return -1;
    }
    
    DisplayLess dobj(ilength);
    dobj.Accept();
    
    cout<<"Enter Given Number : ";
    cin>>iValue;
    
    dobj.Display(iValue);

    return 0;
}