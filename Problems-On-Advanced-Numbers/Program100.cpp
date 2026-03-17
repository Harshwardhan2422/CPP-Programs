#include<iostream>
using namespace std;

class Average 
{
    public:
        int iSize;
        int *Arr;
        
        // Step 2: Allocate Memory Dynamically 
        Average(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }
        // Step 5 : Deallocate that Memory 
        ~Average()
        {
            delete []Arr;
        }
        
        // step 3: Accept Values and Store in Dynamic memory 
        void Accept()
        {
            int iCnt = 0;
            
            cout<<"Please Enter the Values : \n";
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        
        // step 4: perform operation (logic)
        float Display()
        {
            int iCnt = 0, iSum = 0;
            
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return (float)iSum / iSize;
        }
};

int main()
{
    int ilength = 0;
    float fRet = 0.0f;
    
    // step1 : Accept Number Of Element 
    cout<<"Enter Number Of Element : \n";
    cin>>ilength;
    
    if(ilength <= 0)        // Filter 
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