#include<iostream>
using namespace std;

class ByDirectionalSearch
{
    public:
        int isize;
        int *ptr;
        
        ByDirectionalSearch(int x)
        {
            isize = x;
            ptr = new int[isize];
        }
        
        ~ByDirectionalSearch()
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
            int istart = 0, iend = isize - 1;
            
            while(istart <= iend)
            {
                if((ptr[istart] == iNo) || (ptr[iend] == iNo))
                {
                    bresult = true;
                    break;
                }
                istart++;
                iend--;
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
    
    ByDirectionalSearch bobj(ivalue);
    
    bobj.Accept();
    bobj.Display();
    
    cout<<"Enter Number That You Won't To Search : \n";
    cin>>ivalue2;
    
    bRet = bobj.Search(ivalue2);
    
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