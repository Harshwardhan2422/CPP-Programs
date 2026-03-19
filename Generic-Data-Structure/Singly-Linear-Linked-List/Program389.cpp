#include<iostream>
using namespace std;

class Array
{
    public:
        int *ptr;
        int iSize;
        
        Array(int iNo)
        {
            iSize = iNo;
            ptr = new int[iSize];
        }
        
        ~Array()
        {
            delete [] ptr;
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
            int i = 0;
            
            cout<<"Elements of Array Are : \n";
            
            for(i = 0; i < iSize; i++)
            {
                cout<<ptr[i]<<"\n";
            }
        }
        
        int Addition()
        {
            int iCount = 0, i = 0;
            
            for(i = 0; i < iSize; i++)
            {
                iCount = ptr[i] + iCount;
            }
            return iCount;
        }
};

int main()
{
    Array aobj(5);
    aobj.Accept();
    aobj.Display();
    
    int iRet = 0;
    
    iRet = aobj.Addition();
    cout<<"Addition Of Array is : "<<iRet<<"\n";
    
    return 0;
}