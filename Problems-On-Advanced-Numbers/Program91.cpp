#include<iostream>
using namespace std;

class DisplayFrequency
{
    public:
        int *Arr;
        int iSize;
        
    DisplayFrequency(int iNo)
    {
        iSize = iNo;
        Arr = new int[iSize];
    }  
    ~DisplayFrequency()
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
    
    int Display()
    {
        int iCnt = 0, iFrequency = 0;
        
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] == 15)
            {
                iFrequency++;
            }
        }
        return iFrequency;
    }
    
};

int main()
{
    int ilength = 0, iCnt = 0, iRet = 0;
    
    cout<<"Enter Number Of Element : \n";
    cin>>ilength;
    
    if(ilength <= 0)
    {
        cout<<"Size must be Greater than zero \n";
        return -1;
    }
    
    DisplayFrequency dobj(ilength);
    dobj.Accept();
    
    iRet = dobj.Display();
    cout<<"Frequency Of 15 is : "<<iRet<<"\n";
    
    return 0;
}