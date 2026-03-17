#include<iostream>
using namespace std;

class Average 
{
    public:
        int iSize;
        int *Arr;
        
        Average(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }
        ~Average()
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
        
        float Display()
        {
            int iCnt = 0, iSum = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return (iSum / iSize);
        }
};

int main()
{
    int ilength = 0, iCnt = 0;
    float fRet = 0.0f;
    
    cout<<"Enter Number Of Element : \n";
    cin>>ilength;
    
    if(ilength <= 0)
    {
        cout<<"Size Must Be Greater than zero !\n";
        return -1;
    }
    
    Average aobj(ilength);
    aobj.Accept();
    
    fRet = aobj.Display();
    cout<<"Average is : "<<fRet<<"\n";
    
    return 0;
}