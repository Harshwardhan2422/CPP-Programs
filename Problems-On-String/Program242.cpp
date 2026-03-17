#include<iostream>
using namespace std;

class ReverseArray 
{
    public:
        int *str;
        
        ReverseArray(int Brr[])
        {
            str = Brr;
        }
        
        void Display()
        {
            int iStart = 0, iEnd = 4, temp = 0;
            
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
    int Arr[5];
    int i = 0;
    
    cout<<"Enter Values : \n";
    for(i = 0; i < 5; i++)
    {
        cin>>Arr[i];
    }    
    
    ReverseArray obj(Arr);
    obj.Display();
    
    cout<<"Reverse Array is : \n";
    for(i = 0; i < 5; i++)
    {
        cout<<Arr[i]<<"\n";
    }
    
    return 0;
}