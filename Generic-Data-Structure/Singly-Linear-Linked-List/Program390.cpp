#include<iostream>
using namespace std;

template<class T>

class Array
{
    public:
        T *ptr;
        int iSize;
        
        Array(int iNo)
        {
            iSize = iNo;
            ptr = new T[iSize];
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
        
        T Addition()
        {
            T iCount = 0;
            int i = 0;
            
            for(i = 0; i < iSize; i++)
            {
                iCount = ptr[i] + iCount;
            }
            return iCount;
        }
};

int main()
{
    Array <int> aobj(5);
    aobj.Accept();
    aobj.Display();
    
    Array <float> aobj1(5);
    aobj1.Accept();
    aobj1.Display();
    
    int iRet = 0;
    float fRet = 0.0f;
    
    iRet = aobj.Addition();
    cout<<"Addition Of Array is : "<<iRet<<"\n";
    
    fRet = aobj1.Addition();
    cout<<"Addition Of Array is : "<<fRet<<"\n";
    
    return 0;
}