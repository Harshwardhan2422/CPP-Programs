#include<iostream>
using namespace std;

class Array
{
    public:
        int *ptr;
        int iSize;
        
        Array(int iSize);
        ~Array();
        
        void Accept();
        void Display();
        int Addition();
            
};

Array::Array(int iNo)
{
    iSize = iNo;
    ptr = new int[iSize];
}
  
Array::~Array()
{
delete [] ptr;
}

void Array::Accept()
{
    int i = 0;
            
    cout<<"Enter 5 Elements : \n";
            
    for(i = 0; i < iSize; i++)
    {
        cin>>ptr[i];
    }
}

void Array::Display()
{
    int i = 0;
            
    cout<<"Elements of Array Are : \n";
            
    for(i = 0; i < iSize; i++)
    {
        cout<<ptr[i]<<"\n";
    }
}

int Array::Addition()
{
    int iCount = 0, i = 0;
            
    for(i = 0; i < iSize; i++)
    {
        iCount = ptr[i] + iCount;
    }
    return iCount;
}

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