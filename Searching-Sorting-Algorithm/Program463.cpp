#include<iostream>
using namespace std;

class InsertionSort
{
    public:
        int isize;
        int *ptr;
        
        InsertionSort(int x)
        {
            isize = x;
            ptr = new int[isize];
        }
        
        ~InsertionSort()
        {
            delete []ptr;
        }
        
        void Accept()
        {
            int i = 0;
            
            cout<<"Enter The Values : \n";
            
            for(i = 0; i < isize; i++)
            {
                cin>>ptr[i];
            }
        }
        
        void Search()
        {
            int i = 0, j = 0, k = 0;
            int selected = 0;
            
            for(i = 0; i < isize; i++)
            {
                for(j = i - 1, selected = ptr[i]; ((j >= 0) && (ptr[j] > selected)); j--)
                {
                    ptr[j + 1] = ptr[j];
                }
                ptr[j + 1] = selected;
            }
        }
        
        void Display()
        {
            int i = 0;
            
            cout<<"Element Of Array After Sorting \n";
            
            for(i = 0; i < isize; i++)
            {
                cout<<ptr[i]<<"\n";
            }
        }
};

int main()
{
    int ivalue = 0;
    
    cout<<"Enter The Size Of Array : ";
    cin>>ivalue;
    
    InsertionSort obj(ivalue);
    
    obj.Accept();
    obj.Search();
    obj.Display();

    return 0;
}