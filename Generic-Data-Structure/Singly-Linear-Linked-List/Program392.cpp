#include<iostream>
using namespace std;

class Array
{
    public:
        float *ptr;
        int iSize;
        
        Array(int iSize);
        ~Array();
        
        void Accept();
        void Display();
        float Addition();
            
};

Array::Array(int iNo)
{
    iSize = iNo;
    ptr = new float[iSize];
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

float Array::Addition()
{
    float fCount = 0.0f;
    int i = 0;
            
    for(i = 0; i < iSize; i++)
    {
        fCount = ptr[i] + fCount;
    }
    return fCount;
}

int main()
{
    Array aobj(5);
    aobj.Accept();
    aobj.Display();
    
    float fRet = 0.0f;
    
    fRet = aobj.Addition();
    cout<<"Addition Of Array is : "<<fRet<<"\n";
    
    return 0;
}