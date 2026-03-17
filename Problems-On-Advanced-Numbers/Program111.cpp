#include<iostream>
using namespace std;

class Maximum 
{
    public:
        int iSize;
        int *Arr;
        
        Maximum(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }
        ~Maximum()
        {
            delete []Arr;
        }
        
        void Accept()
        {
            int iCnt = 0;
            
            cout<<"Enter "<<iSize<<" Element : \n";
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                 cin>>Arr[iCnt];
            }
        }
        
        int DisplayMax()
        {
            int iCnt = 0, iMax = 0;
            iMax = Arr[0];
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] > iMax)
                {
                    iMax = Arr[iCnt];
                }
            }
            return iMax;
        }
};

int main()
{
    int ilength = 0, iRet = 0;
    
    cout<<"Enter Number Of Element : \n";
    cin>>ilength;
    
    if(ilength <= 0)
    {
        cout<<"Size Must Be Greater Than Zero : \n";
        return -1;
    }
    
    Maximum mobj(ilength);
    mobj.Accept();
    
    iRet = mobj.DisplayMax();
    cout<<"Maximum Number is : "<<iRet<<"\n";

    return 0;
}