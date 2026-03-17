#include<iostream>
using namespace std;

class Ascending 
{
    public:
        int *Arr;
        int iSize;
        
        Ascending(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }
        
        ~Ascending()
        {
            delete [] Arr;
        }
        
        void Accept()
        {
            int i = 0;
            
            cout<<"Enter The Elements : \n";
            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }
        
        void Display()
        {
            int i = 0, j = 0, temp = 0;
            
            
            for(i = 0; i < iSize; i++)
            {
                for(j = i + 1; j < iSize; j++)
                {
                    if(Arr[i] > Arr[j])
                    {
                        temp = Arr[i];
                        Arr[i] = Arr[j];
                        Arr[j] = temp;
                    }
                }
            }
            
            cout<<"\nAscending Order Is : \n";
            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
};

int main()
{
    int iValue = 0;
    
    cout<<"Enter How Many Elements : ";
    cin>>iValue;

    Ascending aobj(iValue);
    
    aobj.Accept();
    aobj.Display();

    return 0;
}