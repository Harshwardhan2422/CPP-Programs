#include<iostream>
using namespace std;

class BinarySearch
{
    public:
        int isize;
        int *ptr;
        
        BinarySearch(int x)
        {
            isize = x;
            ptr = new int[isize];
        }
        
        ~BinarySearch()
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
            int istart = 0, imid = 0,iend = isize - 1;
            bool bresult = false;
            
            while(istart <= iend)
            {
                imid = istart + (iend - istart) / 2;
                
                if(iNo == ptr[imid])
                {
                    bresult = true;
                    break;
                }
                
                if(iNo > ptr[imid])
                {
                    istart = imid + 1;
                }
                
                else
                {
                    iend = imid - 1;
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
    
    BinarySearch bobj(ivalue);
    
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