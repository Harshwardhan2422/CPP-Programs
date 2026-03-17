#include<iostream>
using namespace std;

class Frequency 
{
    public:
        int iSize;
        int *Arr;
        
        Frequency(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }
        ~Frequency()
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
            int iCnt = 0; int iNum = 0, iFrequency = 0;
            
            cout<<"Please Enter Frequency : \n";
            cin>>iNum;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iNum)
                {
                    iFrequency++;
                }
            }
            return iFrequency;
        }
};

int main()
{
    int ilength = 0, iCnt = 0,iRet = 0;
    
    cout<<"Enter Number Of Element : \n";
    cin>>ilength;
    
    if(ilength <= 0)
    {
        cout<<"Size must be Greater than zero \n";
        return -1;
    }
    
    Frequency fobj(ilength);
    fobj.Accept();
    
    iRet = fobj.Display();
    cout<<"Frequency is : "<<iRet<<"\n";
    
    return 0;
}