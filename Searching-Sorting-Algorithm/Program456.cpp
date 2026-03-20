#include<iostream>
using namespace std;

class LinearSearch
{
    public:
        int isize;
        int *ptr;
        
        LinearSearch(int x)
        {
            isize = x;
            ptr = NULL;
            
            ptr = new int[isize];
        }
        
        ~LinearSearch()
        {
            delete []ptr;
        }
        
        void Accept()
        {
            int i = 0;
            cout<<"Enter The Values \n";
            
            for(i = 0; i < isize; i++)
            {
                cin>>ptr[i];
            }
        }
        
        void Display()
        {
            int i = 0;
            
            cout<<"Values Of Array Are : \n";
            
            for(i = 0; i < isize; i++)
            {
                cout<<ptr[i]<<"\n";
            }
        }
        
        bool Search(int iNo)
        {
            bool bresult = false;
            int i = 0;
            
            for(i = 0; i < isize; i++)
            {
                if(iNo == ptr[i])
                {
                    bresult = true;
                    break;
                }
            }
            return bresult;
        }
};

int main()
{
    int ivalue = 0, ivalue2 = 0;
    bool bRet = false;
    
    cout<<"Enter The Value : ";
    cin>>ivalue;
    
    
    LinearSearch sobj(ivalue, ivalue2);
    
    sobj.Accept();
    sobj.Display();
    
    cout<<"Enter Number That You Won't To Search : \n";
    cin>>ivalue2;
    
    bRet = sobj.Search(ivalue2);
    
    if(bRet == true)
    {
        cout<<"Element is Present \n";
    }
    else
    {
        cout<<"There is no such element \n";
    }

    return 0;
}