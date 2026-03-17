#include<iostream>
using namespace std;

class Descending 
{
    public:
        int *str;
        int iSize;
        
        Descending(int Brr[], int iNo)
        {
            str = Brr;
            iSize = iNo;
        }
        
        void Display()
        {
            int i = 0, j = 0, temp = 0;
            
            for(i = 0; i < iSize; i++)
            {
                for(j = i + 1; j < iSize; j++)
                {
                    if(str[i] < str[j])
                    {
                        temp = str[i];
                        str[i] = str[j];
                        str[j] = temp;
                    }
                }
            }
        }
};

int main()
{
    int iValue = 0, i = 0;
    
    cout<<"Enter How many Elements : ";
    cin>>iValue;
    
    int Arr[iValue];
    
    cout<<"Enter The Elements : \n";
    for(i = 0; i < iValue; i++)
    {
        cin>>Arr[i];
    }
    
    Descending dobj(Arr, iValue);
    dobj.Display();
    
    cout<<"Descending Order Is : \n";
    for(i = 0; i < iValue; i++)
    {
        cout<<Arr[i]<<"\n";
    }

    return 0;
}