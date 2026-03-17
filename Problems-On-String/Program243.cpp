#include<iostream>
using namespace std;

class ReverseArray 
{
    public:
        int *str;
        int iSize;
        
        ReverseArray(int Brr[], int iNo)
        {
            str = Brr;
            iSize = iNo;
        }
        
        void Display()
        {
            int iStart = 0, iEnd = 0, temp = 0;
            
            while(iEnd < iSize - 1)
            {
                iEnd++;
            }
            
            while(iStart < iEnd)
            {
                temp = str[iStart];
                str[iStart] = str[iEnd];
                str[iEnd] = temp;
                
                iStart++;
                iEnd--;
            }
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
    
    ReverseArray obj(Arr, iValue);
    obj.Display();
    
    cout<<"Reverse Elements Are : \n";
    for(iCnt =0; iCnt < iValue; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    }
    
    return 0;
}