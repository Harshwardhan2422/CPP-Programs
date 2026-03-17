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
        
        int Display()
        {
            int iStart = 0, iEnd = iSize - 1, temp = 0;
            
            if((str == NULL) || (iSize <= 0))
            {
                return - 1;        // Condition for Error
            }
            
            while(iStart < iEnd)
            {
                temp = str[iStart];
                str[iStart] = str[iEnd];
                str[iEnd] = temp;
                
                iStart++;
                iEnd--;
            }
            return 0;
        }
};

int main()
{
    int iValue = 0, iCnt = 0, iRet = 0;
    
    cout<<"Enter How many Elements : ";
    cin>>iValue;
    
    int Arr[iValue];
    
    cout<<"Enter Elements : \n";
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    ReverseArray obj(Arr, iValue);
    iRet = obj.Display();
    
    if(iRet == 0)
    {
        cout<<"Reverse Elements Are : \n";
        for(iCnt = 0; iCnt < iValue; iCnt++)
        {
            cout<<Arr[iCnt]<<"\n";
        }
    }
    else
    {
        cout<<"Error : Element would not be Reverse \n";
    }
    
    return 0;
}