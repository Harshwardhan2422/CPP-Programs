#include<iostream>
using namespace std;

class Ascending 
{
    public:
        char *str;
        int iSize;
        
        Ascending(char Brr[], int iNo)
        {
            str = Brr;
            iSize = iNo;
        }
        
        void Display()
        {
            int i = 0, j = 0;
            char temp = '\0';
            
            for(i = 0; i < iSize; i++)
            {
                for(j = i + 1; j < iSize; j++)
                {
                    if(str[i] > str[j])
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
    
    cout<<"Enter How Many Characters: ";
    cin>>iValue;
    
    char Arr[iValue];
    
    cout<<"Enter The Characters: \n";
    for(i = 0; i < iValue; i++)
    {
        cin>>Arr[i];
    }
    
    Ascending aobj(Arr, iValue);
    aobj.Display();
    
    cout<<"Ascending Order Is : \n";
    for(i = 0; i < iValue; i++)
    {
        cout<<Arr[i]<<"\n";
    }

    return 0;
} 