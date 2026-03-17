#include<iostream>
using namespace std;

class CountGreater 
{    
    public:
        int iSize = 0;
        int *Arr;
        
        CountGreater(int iNum)
        {
            iSize = iNum;
            Arr = new int[iSize];
        }
        ~CountGreater()
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
        
        int Display(int iNo)
        {
            int iCnt = 0, iCount = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] > iNo)
                {
                    iCount++;
                }
            }
            return iCount;
        }
};

int main()
{
    int ilength = 0, iValue = 0, iRet = 0;
    
    cout<<"Enter Number Of Element : \n";
    cin>>ilength;
    
    if(ilength <= 0)
    {
        cout<<"Size Must Be Greater Than Zero \n";
        return -1;
    }
    
    CountGreater cobj(ilength);
    cobj.Accept();
    
    cout<<"Enter Number To Compare : \n";
    cin>>iValue;
    
    iRet = cobj.Display(iValue);
    cout<<"Number Of Element Greater Than "<<iValue<<" is : "<<iRet<<"\n";
    
    return 0;
}