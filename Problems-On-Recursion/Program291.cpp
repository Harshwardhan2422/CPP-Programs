#include<iostream>
using namespace std;

class Recursion 
{
    public:
        int *ptr;
        int iSize;
        
        Recursion(int iNo)
        {
            iSize = iNo;
            ptr = new int[iSize];
        }
        ~Recursion()
        {
            delete []ptr;
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
        
        void DisplayR()
        {
            static int i = 0;
            
            if(i < iSize)
            {
                cout<<ptr[i]<<"\n";
                i++;
                DisplayR();
            }
        }
};

int main()
{
    int iValue = 0, i = 0;
    
    cout<<"Enter The Number : ";
    cin>>iValue;
    
    Recursion obj(iValue);
    obj.Accept();
    obj.DisplayR();

    return 0;
}