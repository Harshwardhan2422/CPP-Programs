#include<iostream>
using namespace std;

class CountNumber
{
    public:
        int *str;
        int iSize;
        
        CountNumber(int Brr[], int iNo)
        {
            str = Brr;
            iSize = iNo;
        }
        
        void Display()
        {
            int iEven = 0, iOdd = 0, iPos = 0, iNeg = 0, iZero = 0;
            int i = 0;
            
            for(i = 0; i < iSize; i++)
            {
                if(str[i] != 0)
                {
                    if(str[i] % 2 == 0)
                    {
                        iEven++;
                    }
                    else
                    {
                        iOdd++;
                    }
                }
                
                if(str[i] > 0)
                {
                    iPos++;
                }
                else if(str[i] < 0)
                {
                    iNeg++;
                }
                else
                {
                    iZero++;
                }
            }
            
            cout<<"Even Numbers : "<<iEven<<"\n";
            cout<<"Odd Numbers : "<<iOdd<<"\n";
            cout<<"Positive Numbers : "<<iPos<<"\n";
            cout<<"Negative Numbers : "<<iNeg<<"\n";
            cout<<"Zero Numbers : "<<iZero<<"\n";
        }
};

int main()
{
    int iValue = 0, iCnt = 0;
    
    cout<<"Enter How many Elements : ";
    cin>>iValue;
    
    int Arr[iValue];
    
    cout<<"Enter Elements : \n";
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    CountNumber cobj(Arr, iValue);
    cobj.Display();

    return 0;
}