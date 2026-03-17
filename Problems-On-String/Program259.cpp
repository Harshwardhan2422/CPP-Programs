#include<iostream>
using namespace std;

class Ascending 
{
    public:
        int *ptr;
        int iSize;
        
        Ascending(int iNo)
        {
            iSize = iNo;
            ptr = new int[iSize];
        }
        
        ~Ascending()
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
        
        void Display()
        {
            int i = 0, j = 0, temp = 0;
            
            for(i = 0; i < iSize; i++)
            {
                for(j = i + 1; j < iSize; j++)
                {
                    if(ptr[i] > ptr[j])
                    {
                        temp = ptr[i];
                        ptr[i] = ptr[j];
                        ptr[j] = temp;
                    }
                }
            }
            
            cout<<"\nAscending Order Is : \n";
            for(i = 0; i < iSize; i++)
            {
                cout<<ptr[i]<<"\n";
            }
        }
};

class Descending 
{
    public:
        int *ptr;
        int iSize;
        
        Descending(int iNo)
        {
            iSize = iNo;
            ptr = new int[iSize];
        }
        
        ~Descending()
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
    int iValue = 0, ichoice = 0;
    
    cout<<"Enter How Many Elements : ";
    cin>>iValue;
    
    cout<<"\n1.Ascending Order\n2Descending Order\nEnter Choice : ";
    cin>>ichoice;
    
    if(ichoice == 1)
    {
        Ascending aobj(iValue);
        aobj.Accept();
        aobj.Display();
    }
    else if(ichoice == 2)
    {
        Descending dobj(iValue);
        dobj.Accept();
        dobj.Display();
    }
    else
    {
        cout<<"Invalid Choice!\n";
    }

    return 0;
}