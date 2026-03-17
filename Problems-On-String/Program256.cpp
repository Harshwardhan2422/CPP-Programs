#include<iostream>
using namespace std;

class Ascending 
{
    public:
        char *Arr;
        int iSize;
        
        Ascending(int iNo)
        {
            iSize = iNo;
            // Allocate Dynamic memory 
            Arr = new char[iSize];
        }
        
        ~Ascending()
        {
            // Deallocate Memory 
            delete [] Arr;
        }
        
        void Accept()
        {
            int i = 0;
            
            cout<<"Enter The Characters : \n";
            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }
        
        void Display()
        {
            int i = 0, j = 0;
            char temp = '\0';
            
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