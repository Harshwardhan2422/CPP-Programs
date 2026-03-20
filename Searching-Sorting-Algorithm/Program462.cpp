#include<iostream>
using namespace std;

class SelectionSort
{
    public:
        int isize;
        int *ptr;
        
        SelectionSort(int x)
        {
            isize = x;
            ptr = new int[isize];
        }
        
        ~SelectionSort()
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
            int i = 0, j = 0, min_index = 0, temp = 0;
            
            for(i = 0; i < isize - 1; i++)
            {
                min_index = i;
                
                for(j = i + 1; j < isize; j++)
                {
                    if(ptr[min_index] > ptr[j])
                    {
                        min_index = j;
                    }
                }
                
                temp = ptr[i];
                ptr[i] = ptr[min_index];
                ptr[min_index] = temp;
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
    
    SelectionSort sobj(ivalue);
    
    sobj.Accept();
    sobj.Search();
    sobj.Display();

    return 0;
}