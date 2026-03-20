#include<iostream>
using namespace std;

class Search
{
    public:
        int isize;
        int *ptr;
        
        Search(int iNo)
        {
            isize = iNo;
            ptr = NULL;
            
            ptr = new int[isize];
        }
        
        ~Search()
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
            
            cout<<"Values  Of Array Are : \n";
            
            for(i = 0; i < isize; i++)
            {
                cout<<ptr[i]<<"\n";
            }
        }
};

int main()
{
    int ivalue = 0;
    
    cout<<"Enter The Value : ";
    cin>>ivalue;
    
    Search sobj(ivalue);
    
    sobj.Accept();
    sobj.Display();

    return 0;
}