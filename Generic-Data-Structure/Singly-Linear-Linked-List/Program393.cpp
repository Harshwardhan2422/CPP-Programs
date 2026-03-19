#include<iostream>
using namespace std;

template<class T>
class Array
{
    public:
        T *ptr;
        int iSize;
        
        Array(int iSize);
        ~Array();
        
        void Accept();
        void Display();
        T Addition();
            
};

template<class T>
Array<T>::Array(int iNo)
{
    iSize = iNo;
    ptr = new T[iSize];
}
  
template<class T>  
Array<T>::~Array()
{
    delete [] ptr;
}

template<class T>
void Array<T>::Accept()
{
    int i = 0;
            
    cout<<"Enter 5 Elements : \n";
            
    for(i = 0; i < iSize; i++)
    {
        cin>>ptr[i];
    }
}

template<class T>
void Array<T>::Display()
{
    int i = 0;
            
    cout<<"Elements of Array Are : \n";
            
    for(i = 0; i < iSize; i++)
    {
        cout<<ptr[i]<<"\n";
    }
}

template<class T>
T Array<T>::Addition()
{
    T fCount = 0.0f;
    int i = 0;
            
    for(i = 0; i < iSize; i++)
    {
        fCount = ptr[i] + fCount;
    }
    return fCount;
}

int main()
{
    Array<float>aobj1(5);
    aobj.Accept();
    aobj.Display();
    
    float fRet = 0.0f;
    
    fRet = aobj.Addition();
    cout<<"Addition Of Array is : "<<fRet<<"\n";
    
    return 0;
}