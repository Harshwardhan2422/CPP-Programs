#include<iostream>
using namespace std;

class Descending 
{
    public:
        int *ptr;
        int iSize;
        
        Descending(int iNo)
        {
            iSize = iNo;
            ptr = new int[iSize];    // Allocate Dynamic Memory 
        }
        ~Descending()
        {
            delete []ptr;    // Deallocate Memory 
        }
        void Accept()
        {
            int i = 0;
            
            cout<<"Enter The Elements : \n";
            for(i = 0; i < iSize; i++)
            {
                cin>>ptr[i];
            }
        }
        void Display()
        {
            int i = 0, j = 0, temp = 0;
            
            for(i = 0; i < iSize; i++)
            {
                for(j = i + 1; j < iSize; j++)
                {
                    if(ptr[i] < ptr[j])
                    {
                        temp = ptr[i];
                        ptr[i] = ptr[j];
                        ptr[j] = temp;
                    }
                }
            }
            cout<<"\nDescending Order Is : \n";
            for(i = 0; i < iSize; i++)
            {
                cout<<ptr[i]<<"\n";
            }
        }
};

int main()
{
    int iValue = 0;
    
    cout<<"Enter How Many Elements : ";
    cin>>iValue;
    
    Descending dobj(iValue);
    dobj.Accept();
    dobj.Display();
    
    return 0;
}